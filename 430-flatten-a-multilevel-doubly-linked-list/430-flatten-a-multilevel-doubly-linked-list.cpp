/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if (!head) return nullptr;
        Node* tail = head;
        
        Node* n1 = flatten(head->child);
        Node* n2 = flatten(head->next);

        if (n1) {
            tail->next = n1;
            while (tail->next) {
                tail->next->prev = tail;
                tail->child = nullptr;
                tail = tail->next;
            }
        }
        
        tail->next = n2;
        if (n2) {
            n2->prev = tail;
        }
        
        return head;
    }
};