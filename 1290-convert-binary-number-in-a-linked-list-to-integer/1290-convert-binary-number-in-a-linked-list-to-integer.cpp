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
    int getDecimalValue(ListNode* head) {
        string s="";
        ListNode* curr=head;
        while(curr){
            s+=to_string(curr->val);
            curr=curr->next;
        }
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans=ans*2+(s[i]-'0');
        }
        return ans;
    }
};