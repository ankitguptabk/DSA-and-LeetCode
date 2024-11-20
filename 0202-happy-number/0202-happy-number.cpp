class Solution {
public:
    bool isHappy(int n) {
        int a=0,ans=0;
        unordered_set<int>seen;
        if(n==1) return true;
        while(n!=1){
            ans=0;
            while(n>0){
                a=n%10;
                ans+=a*a;
                n/=10;
            }
            n=ans;
            if(seen.count(n)) return false;
            seen.insert(n);
        }
        return true;
    }
};