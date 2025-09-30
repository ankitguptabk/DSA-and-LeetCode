class Solution {
public:
    long long splitArray(vector<int>& n) {
        int size = n.size();
        vector<long long> pref(size+1,0);
        vector<bool> inc(size,false), dec(size,false);

        for (int i=0;i<size;i++) pref[i+1] = pref[i] + n[i];

        inc[0] = true;
        for (int i=1;i<size;i++) {
            if (n[i] > n[i-1] && inc[i-1]) inc[i] = true;
            else inc[i] = false;
        }
        dec[size-1] = true;
        for (int i=size-2;i>=0;i--) {
            if (n[i] > n[i+1] && dec[i+1]) dec[i] = true;
            else dec[i] = false;
        }
        long long ans = LLONG_MAX;
        for (int i=0;i<size-1;i++) {
            if (inc[i] && dec[i+1]) {
                long long x = pref[i+1];
                long long y = pref[size]-pref[i+1];
                ans = min(ans, llabs(x-y));
            }
        }
        if(ans==LLONG_MAX) return -1;
        return ans;
    }
};
        