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
        vector<int>a;
        for(auto head:lists){
            while(head){
                a.push_back(head->val);
                head=head->next;
            }
        }
        sort(a.begin(),a.end());
        ListNode dummy(0);
        ListNode* curr=&dummy;
        for(int v:a){
            curr->next=new ListNode(v);
            curr=curr->next;
        }
        return dummy.next;
    }
};