class Solution {
public:
    long long maxProduct(vector<int>& n) {

        sort(n.begin(), n.end(), [](int p, int q){
            return llabs((long long)p) >llabs((long long)q);
        });
        long long a = llabs((long long)n[0]);
        long long b = llabs((long long)n[1]);
        long long ans = 100000LL * a * b;
        return ans;
    }
};
