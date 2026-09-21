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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* newNode=NULL;
        ListNode* head=NULL;

        if(list1==NULL && list2==NULL){
            return NULL;
        }else if(list1==NULL){
            return list2;
        }else if(list2==NULL){
            return list1;
        }
        
        if(temp1->val <= temp2->val){
            head=temp1;
            newNode=temp1;
            temp1=temp1->next;
        }else{
            head=temp2;
            newNode=temp2;
            temp2=temp2->next;
        }

        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val <= temp2->val){
                newNode->next=temp1;
                temp1=temp1->next;
                newNode=newNode->next;

            }else{
                newNode->next=temp2;
                temp2=temp2->next;
                newNode=newNode->next;
            }
        }

        while(temp1!=NULL){
            newNode->next=temp1;
            temp1=temp1->next;
            newNode=newNode->next;
        }
        while(temp2!=NULL){
            newNode->next=temp2;
            temp2=temp2->next;
            newNode=newNode->next;
        }
    return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna