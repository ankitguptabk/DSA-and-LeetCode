class Solution {
public:
    vector<long long> countStableSubarrays(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<long long>a(n);
        a[0]=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]<=nums[i]) a[i]=a[i-1]+1;
            else a[i]=1;
        }
        vector<long long>pre(n);
        long long p=0;
        for(int i=0;i<n;i++){
            p+=a[i];
            pre[i]=p;
        }
        vector<int> nxt(n);
        int idx=n-1;
        nxt[n-1]=n-1;

        for(int i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1]) nxt[i]=idx;
            else{
                idx=i;
                nxt[i]=idx;
            }
        }
        vector<long long>ans(queries.size());

        for(int i=0;i<queries.size();i++){
            int l=queries[i][0], r=queries[i][1];
            int N=min(nxt[l], r);
            int len=N-l+1;

            long long sum=1LL*len*(len+1)/2;
            if(N==r){
                ans[i]=sum;
                continue;
            }
            long long L=pre[N];
            long long R=pre[r];
            ans[i]=sum + R - L;
        }
        return ans;
    }
};