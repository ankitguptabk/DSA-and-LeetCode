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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>x;
        ListNode* curr=head;
        while(curr){
            x.push_back(curr->val);
            curr=curr->next;
        }
        ListNode dummy(0);
        ListNode* c=&dummy;
        for(int i=0;i<x.size();i+=2){
            c->next=new ListNode(x[i]);
            c=c->next;
        }
        for(int i=1;i<x.size();i+=2){
            c->next=new ListNode(x[i]);
            c=c->next;
        }
        return dummy.next;
    }
};