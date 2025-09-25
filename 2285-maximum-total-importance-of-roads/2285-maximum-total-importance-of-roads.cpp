class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& r) {
        vector<long long>a(n,0);
        long long ans=0;
        for(int i=0;i<r.size();i++){
            a[r[i][0]]++;
            a[r[i][1]]++;
        }
        sort(a.begin(),a.end(),greater<long long>());
        for(int i=0;i<n;i++){
            ans+=a[i]*(n-i);
        }
        return ans;
    }
};