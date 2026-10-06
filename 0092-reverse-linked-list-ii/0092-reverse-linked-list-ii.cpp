/**
 * Definition for singly-linked list.
 * struct ListListNode {
 *     int val;
 *     ListListNode *next;
 *     ListListNode() : val(0), next(nullptr) {}
 *     ListListNode(int x) : val(x), next(nullptr) {}
 *     ListListNode(int x, ListListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0);
        if(head->next==nullptr){
            return head;
        }
        dummy->next=head;

        ListNode* before=dummy;
        for(int i=1;i<left;i++){
            before=before->next;
        }
        ListNode* leftNode=before->next;
        //reversal
        ListNode* curr=leftNode;
        ListNode* prev=nullptr;

        for(int i=0;i<(right-left+1);i++){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        before->next=prev;
        leftNode->next=curr;
        return dummy->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna