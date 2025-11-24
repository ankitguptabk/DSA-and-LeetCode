class Solution {
public:
    int maxBalancedSubarray(vector<int>& n) {
        int a = 0, ans = 0;
        long long x = 0;
        unordered_map<long long, unordered_map<int,int>> m;
        m[0][0] = -1;

        for(int i = 0; i <n.size(); i++){
            x ^= n[i];
            if(n[i] % 2 == 0) a++;
            else a--;
            if(m[x].count(a)) ans = max(ans, i - m[x][a]);
            else m[x][a] = i;
        }
        return ans;
    }
};
