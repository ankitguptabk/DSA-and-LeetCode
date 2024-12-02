class Solution {
public:
    string gcdOfStrings(string s, string a) {
        int x=s.size();
        int y=a.size();
        int ans=__gcd(x,y);
        string b="";
        if(s[0]!=a[0]) return "";
        for(int i=0;i<ans;i++){
            b+=s[i];
        }
        string c="", d="";
        int s_repeat=s.size()/b.size();
        int a_rep=a.size()/b.size();
        for(int i=0;i<s_repeat;i++){
            c+=b;
        }
        for(int i=0;i<a_rep;i++){
            d+=b;
        }
        if(c==s && d==a) return b;
        return "";
    }
};