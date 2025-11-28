class Solution {
public:
    long long maxSubarraySum(vector<int>& n, int k) {
        long long ans=LLONG_MIN;
        vector<long long>best(k,LLONG_MAX);
        long long sum=0;
        best[0]=0;
        for(int i=0;i<n.size();i++){
            sum+=n[i];
            int c=(i+1)%k;
            if(best[c]!=LLONG_MAX){
                ans=max(ans,sum-best[c]);
            }
            best[c]=min(best[c],sum);
        }
        return ans;
    }
};