class Solution {
public:
    bool prime(long long x){
        if(x==1) return false;
        for(long long i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    bool completePrime(int n) {
        if(n==1) return false;
        string s=to_string(n);
        string a="";
        for(int i=0;i<s.size();i++){
            a+=s[i];
            if(!prime(stoll(a))){
                return false;
            }
        }
        a="";
        for(int i=s.size()-1;i>=0;i--){
            a+=s[i];
            string y=a;
            reverse(y.begin(),y.end());
            if(!prime(stoll(y))){
                return false;
            }
        }
        return true;
    }
};