class Solution {
public:
    string getHint(string s, string g) {
        string ans="";
        int n=s.size();
        vector<bool>used_s(n,false),used_g(n,false);
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(s[i]==g[i]){
                x++;
                used_s[i]=true,used_g[i]=true;
            }
        }
        for(int i=0;i<n;i++){
            if(used_s[i]) continue;
            for(int j=0;j<n;j++){
                if(used_g[j]) continue;
                else if(i!=j && s[i]==g[j]){
                    y++;
                    used_s[i]=true,used_g[j]=true;
                    break;
                }
            }
        }
        ans+=to_string(x)+"A"+to_string(y)+"B";
        return ans;
    }
};