class Solution {
public:
    int mirrorReflection(int p, int q) {
        int l=lcm(p,q);
        int m=l/p, n=l/q;
        if(m%2==1 && n%2==1) return 1;
        else if(m%2==1 && n%2==0) return 2;
        return 0;
    }
};