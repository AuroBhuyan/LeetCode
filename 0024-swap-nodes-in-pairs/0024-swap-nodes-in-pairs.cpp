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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = head;
        int c = 0;
        while(c<2){
            if(!temp) return head;

            temp = temp->next;
            c++;
        }

        ListNode* prevNode = swapPairs(temp);

        c = 0;
        temp = head;
        while(c<2){
            ListNode* next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            c++; 
        }

        return prevNode;
    }
};