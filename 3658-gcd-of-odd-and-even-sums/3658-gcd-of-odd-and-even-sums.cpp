class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumo=0, sume=0;
        sume=n*(n+1);
        sumo=n*n;
        return __gcd(sume,sumo);
    }
};