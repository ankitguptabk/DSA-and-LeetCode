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
    int pairSum(ListNode* head) {
        int ans=0;
        vector<int>a;
        ListNode* curr=head;
        while(curr){
            a.push_back(curr->val);
            curr=curr->next;
        }
        for(int i=0;i<a.size()/2;i++){
            ans=max(ans,a[i]+a[a.size()-1-i]);
        }
        return ans;
    }
};