#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumDifference(vector<int>& n) {
        int a = n.size() / 3;
        int s = n.size();
        vector<long long> l(s, 0);
        priority_queue<long long> pq1;
        long long sum1 = 0;
        for (int i = 0; i < s;i++) {
            pq1.push(n[i]);
            sum1 += n[i];
            if (pq1.size() > a) {
                sum1 -= pq1.top();
                pq1.pop();
            }
            if (i >= a - 1) l[i] = sum1;
        }
        vector<long long> r(s + 1, 0);
        priority_queue<long long, vector<long long>, greater<long long>> pq2;
        long long sum2 = 0;
        for (int i = s - 1; i >= 0; i--) {
            pq2.push(n[i]);
            sum2 += n[i];
            if (pq2.size() > a) {
                sum2 -= pq2.top();
                pq2.pop();
            }
            if (i <= s - a) r[i] = sum2;
        }

        long long ans = LLONG_MAX;
        for (int i = a-1; i<2*a; i++) {
            ans = min(ans, l[i] - r[i + 1]);
        }
        return ans;
    }
};
