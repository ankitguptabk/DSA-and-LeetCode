class Solution {
public:
    int xorBeauty(vector<int>& n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            ans^=n[i];
        }
        return ans;
    }
};