class Solution {
public:
    int partitionArray(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        int ans=1;
        int m=n[0];
        for(int i=0;i<n.size();i++){
            if(n[i]-m<=k){
                continue;
            }
            else{
                ans++;
                m=n[i];
            }
        }
        return ans;
    }
};