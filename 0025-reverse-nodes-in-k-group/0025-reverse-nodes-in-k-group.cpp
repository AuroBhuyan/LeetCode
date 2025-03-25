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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int c = 0;
        while(c<k){
            if(temp==NULL)
            return head;

            temp = temp->next;
            c++;
        }

        ListNode* prevNode = reverseKGroup(temp,k);

        temp = head;
         c = 0;
        while(c<k){
            ListNode* Next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = Next;

            c++;
        }

        return prevNode;
    }
};