class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        long long ans=0;
        string s=to_string(n);
        string x="";
        long long sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                x+=s[i];
            }
            sum+=(s[i]-'0');
        }
        ans=stoll(x)*sum;
        return ans;
    }
};