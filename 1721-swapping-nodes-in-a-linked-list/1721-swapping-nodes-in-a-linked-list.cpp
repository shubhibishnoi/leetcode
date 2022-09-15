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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head) return NULL;
        ListNode* temp = head;
        ListNode* temp1 = head;
        ListNode* temp2= head;
        
        int i=1;
        int n=1;
        int j=1;
        while(temp->next){
            temp= temp->next;
            n++;
        }
        while(temp1->next && i!=k){
            temp1 = temp1->next;
            i++;
        }
        
        while(temp2 && j!= (n-i+1) ){
        
        temp2= temp2->next;
        j++;
        }
        
    if(temp1 == temp2) return head;
        
        //swap
        
        int swapNode = temp1->val;
        temp1->val = temp2->val;
        temp2->val = swapNode;
        return head;
    }
};