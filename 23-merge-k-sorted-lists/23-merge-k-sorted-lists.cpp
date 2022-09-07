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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        vector<int> v;
        for(int i=0; i<lists.size(); i++){
            ListNode* h1 = lists[i];
            while(h1){
                v.push_back(h1->val);
                h1= h1->next;
            }
        }
        sort(v.begin(), v.end());
        
        for(int i=0; i<v.size();i++){
            temp->next = new ListNode(v[i]);
            temp= temp->next;
        }
        return dummy->next;
    }
};