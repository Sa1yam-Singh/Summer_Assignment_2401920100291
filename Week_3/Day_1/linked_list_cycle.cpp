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
    bool hasCycle(ListNode *head) {
        ListNode* A=head;
        ListNode* B=head;
        while(B!=NULL&&B->next!=NULL){
            A=A->next;
            B=B->next->next;
            if(A==B){
                return true;
            }
    
        }
        return false;
    }
};
