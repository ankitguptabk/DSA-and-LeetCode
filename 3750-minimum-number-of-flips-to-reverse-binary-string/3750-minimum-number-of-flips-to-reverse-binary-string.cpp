class Solution {
public:
    int minimumFlips(int n) {
        string s="";
        while(n>0){
            int a=(n%2);
            s+=a+'0';
            n/=2;
        }
        string x=s;
        reverse(x.begin(),x.end());
        long long ans=0;
        for(int i=0;i<s.size();i++){
            if(x[i]!=s[i]) ans++;
        }
        return (int)ans;
    }
};