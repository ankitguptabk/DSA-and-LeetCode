class Solution {
public:
    bool reorderedPowerOf2(int n) {
        if(n==1) return true;
        string s=to_string(n);
        sort(s.begin(),s.end());
        int a=s.size();
        int maxpow=log2(1e9); //2^30>1e9
        for(int i=0;i<=maxpow;i++){
            int x=1<<i;
            string p=to_string(x);
            if(p.size()!=a) continue;
            sort(p.begin(),p.end());
            if(p==s) return true;
        }
        return false;
    }
};