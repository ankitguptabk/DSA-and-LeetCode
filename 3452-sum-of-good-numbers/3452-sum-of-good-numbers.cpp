class Solution {
public:
    int sumOfGoodNumbers(vector<int>& n, int k) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            if(i-k<0 && i+k>=n.size()){
                ans+=n[i];
            }
            else if(i-k<0 && i+k<n.size() && n[i]>n[i+k]) ans+=n[i];
            else if(i+k>=n.size() && i-k>=0 && n[i]>n[i-k]) ans+=n[i];
            else if(i-k>=0 && n[i]>n[i-k] && i+k<n.size() && n[i]>n[i+k]) ans+=n[i];
        }
        return ans;
    }
};