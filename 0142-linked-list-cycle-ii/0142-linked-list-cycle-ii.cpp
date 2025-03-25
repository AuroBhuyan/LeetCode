/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = NULL;
        if(!head || !head->next)return temp;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast){
            fast = fast->next;
            if(fast)
            fast = fast->next;
            slow = slow->next;

            if(fast==slow){
               temp = fast;
               break;
            }
        }

        if(!temp) return temp;

        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
        
    }
};