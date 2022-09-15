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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        
        while(l1 && l2){
            if(l1->val > l2->val){
                temp->next = l2;
                temp=temp->next;
                l2=l2->next;
            }
            
            else{
               temp->next = l1;
                temp= temp->next;
                l1=l1->next;
            }
        }
        
        if(!l1) temp->next=l2;
        if(!l2) temp->next = l1;
        
        return dummy->next;
    }
};