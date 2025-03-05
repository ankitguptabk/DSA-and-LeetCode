class Solution {
public:
    bool p(string s){
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-1-i]) return false;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        if(n>=2){
            for(int i=2;i<=n-2;i++){
                string s="";
                int num=n;
                while(num>0){
                    s+=char((num%i));
                    num/=i;
                }
                if(!p(s)) return false;
            }
        }
        return true;
    }
};