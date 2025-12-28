class Solution {
public:
    int countSubstrings(string s, string t) {
        int ans=0;
        int n=s.size(), m=t.size();
        for(int i=0;i<n;i++){
            string x="";
            for(int j=i;j<n;j++){
                x+=s[j];
                int sz=x.size();
                for(int k=0;k+sz<=m;k++){
                    int c=0;
                    string y=t.substr(k,sz);
                    for(int p=0;p<sz;p++){
                        if(x[p]!=y[p]) c++;
                        if(c>1) break;
                    }
                    if(c==1) ans++;
                }
            }
        }
        return ans;
    }
};