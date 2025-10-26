class Solution {
public:
    long long removeZeros(long long n) {
        string x="";
        string y=to_string(n);
        for(int i=0;i<y.size();i++){
            if(y[i]!='0') x+=y[i];
        }
        long long ans=stoll(x);
        return ans;
    }
};