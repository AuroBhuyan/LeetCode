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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dNode = new ListNode(0);
        dNode->next = head;
        ListNode* curr = head;
        ListNode* prev = dNode;
        if(!head || !head->next) return head;

        while(curr && curr->next){
            if(curr->val == curr->next->val ){
                while( curr->next && curr->val==curr->next->val ){
                    curr = curr->next;
                }
                prev->next = curr->next;
                curr = curr->next;
            }
            else
            {
                  prev = curr;
                  curr = curr->next;
            }
        }

        return dNode->next;
    }
};