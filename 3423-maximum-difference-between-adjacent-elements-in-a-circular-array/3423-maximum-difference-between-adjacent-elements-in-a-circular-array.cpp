class Solution {
public:
    int maxAdjacentDistance(vector<int>& n){
        int ans=abs(n[0]-n[n.size()-1]);
        for(int i=0;i<n.size()-1;i++){
            ans=max(ans,abs(n[i]-n[i+1]));
        }
        return ans;
    }
};