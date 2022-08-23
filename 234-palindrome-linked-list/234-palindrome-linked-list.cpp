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
    
    ListNode* reverseList(ListNode* head){
        ListNode* prev  = NULL;
        ListNode* curr = head;
        
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev=curr;
            curr= temp;
        }
        
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast= fast->next->next;
        }
        
        slow->next = reverseList(slow->next);
        slow=slow->next;
        while(slow){
            
            if(head->val != slow->val ) return false;
            
            slow = slow->next;
            head= head->next;
        }
        return true;
    }
};  