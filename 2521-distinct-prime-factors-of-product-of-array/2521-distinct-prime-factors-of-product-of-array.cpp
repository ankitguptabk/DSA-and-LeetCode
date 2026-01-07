class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> used;
        for (int x:nums) {
            if (x % 2==0) {
                used.insert(2);
                while (x % 2 == 0) x /= 2;
            }
            for (int i=3;i*i<= x; i+=2) {
                if (x%i==0) {
                    used.insert(i);
                    while (x % i == 0) x /= i;
                }
            }
            if (x>1) {
                used.insert(x);
            }
        }
        return used.size();
    }
};