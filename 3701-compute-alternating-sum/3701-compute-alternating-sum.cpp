class Solution {
public:
    int alternatingSum(vector<int>& n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            if(i%2==0){
                ans+=n[i];
            }
            else ans-=n[i];
        }
        return ans;
    }
};