#include <vector>
#include <queue>

class Solution {
public:
    int minOperations(vector<int>& n, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(n.begin(), n.end());  
        int ans = 0;
        while (pq.top() < k && pq.size() >= 2) {
            long long x = pq.top(); 
            pq.pop();
            long long y = pq.top(); 
            pq.pop();
            long long z = x*2+y;
            pq.push(z);
            ans++;
        }
        return ans;
    }
};
