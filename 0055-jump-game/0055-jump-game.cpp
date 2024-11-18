class Solution {
public:
    bool canJump(vector<int>& n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            if(ans<i) return false;
            ans=max(ans,i+n[i]);
        }
        return ans>=n.size()-1;
    }
};