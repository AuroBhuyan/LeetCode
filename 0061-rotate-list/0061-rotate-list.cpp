/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode* tail = head;
        int l = 1;
        while(tail && tail->next){
            tail=tail->next;
            l++;
        }

        if(k%l==0) return head;

        tail->next = head;

        ListNode* curr = head;
        k = k%l;
        l = l-k-1;
        while(l--){
           curr = curr->next;
        }

        head = curr->next;
        curr->next = NULL;
        
        return head;

    }
};