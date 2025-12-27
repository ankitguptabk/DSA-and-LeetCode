class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans=0;
        int n=arr.size();
        vector<long long> sum(n,0);
        long long x=0;
        for(int i=0;i<n;i++){
            x+=arr[i];
            sum[i]=x;
        }
        if((double)sum[k-1]/k>=threshold) ans++;
        for(int i=1;i<=n-k;i++){
            double curr_avg=(static_cast<double>(sum[i+k-1]-sum[i-1]))/static_cast<double>(k);
            if(curr_avg>=static_cast<double>(threshold)) ans++;
        }
        return ans;
    }
};