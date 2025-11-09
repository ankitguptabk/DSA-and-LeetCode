class Solution {
public:
    int countMajoritySubarrays(vector<int>& n, int t) {
        int ans=0;
        for(long long i=0;i<(long long)n.size();i++){
            int c=0;
            for(long long j=i;j<(long long)n.size();j++){
                if(n[j]==t) c++;
                int x=j-i+1;
                if(2LL*c>x) ans++;
            }
        }
        return ans;
    }
};