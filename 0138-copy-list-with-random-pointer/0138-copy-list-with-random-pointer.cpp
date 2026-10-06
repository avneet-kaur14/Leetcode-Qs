/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        Node* curr=head;
        while(curr!=NULL){
            Node* copy=new Node(curr->val);
            copy->next=curr->next;
            curr->next=copy;

            curr=copy->next;
        }
        curr=head;
        while(curr!=nullptr){
            if(curr->random!=NULL){
                curr->next->random=curr->random->next;
            }
            curr=curr->next->next;
        }

        curr=head;
        Node* copyHead=head->next;
        while(curr!=nullptr){
            Node* copy=curr->next;
            curr->next=curr->next->next;
            if(curr->next!=NULL){
                copy->next=curr->next->next;
            }
            curr=curr->next;
        }
        return copyHead;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna