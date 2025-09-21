class Solution {
public:
    long long maxTotalValue(vector<int>& n, int k) {
        long long a=LLONG_MAX,b=LLONG_MIN;
        for(int i=0;i<n.size();i++){
            a=min(a,(long long) n[i]);
            b=max(b,(long long) n[i]);
        }
        return (b-a)*(long long)k;
    }
};