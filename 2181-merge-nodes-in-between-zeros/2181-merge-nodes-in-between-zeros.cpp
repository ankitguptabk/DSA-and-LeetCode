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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newhead=NULL;
        ListNode* newtail=NULL;
        ListNode* temp=head->next;
        int sum=0;
        while(temp!=NULL){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                ListNode* node =new ListNode(sum);
                if(newhead==NULL){
                    newhead=node;
                    newtail=node;
                }
                else{
                    newtail->next=node;
                    newtail=node;
                }
                sum=0;
            }
            temp=temp->next;
        }
        return newhead;
    }
};