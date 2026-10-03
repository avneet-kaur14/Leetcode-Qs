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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int len=1;
        if(head == NULL || head->next == NULL)
            return head;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }

        k=k%len;
        temp->next=head;
        int new_idx=len-k-1;
        ListNode* newTail=head;
        for(int i=0;i<new_idx;i++){
            newTail=newTail->next;
        }
        ListNode* newHead=newTail->next;
        newTail->next=NULL;
        return newHead;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna