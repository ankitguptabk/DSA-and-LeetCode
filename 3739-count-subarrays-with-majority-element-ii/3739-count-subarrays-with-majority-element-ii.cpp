class Solution {
public:
    long long countMajoritySubarrays(vector<int>& n, int t) {
        int sz =(int)n.size();
        int pre =sz +1;
        int m = 2*sz+2;
        vector<long long> cnt(m,0), acc(m,0);

        cnt[pre] = 1;
        acc[pre] = 1;
        long long ans = 0;
        for(int i=0;i<sz;i++){
            if(n[i] == t) pre++;
            else pre--;
            cnt[pre]++;
            acc[pre] = cnt[pre] + acc[pre-1];
            ans += acc[pre-1];
        }
        return ans;
    }
};