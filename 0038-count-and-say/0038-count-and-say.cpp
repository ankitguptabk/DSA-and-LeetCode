class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        for(int i=2;i<=n;i++){
            string nexsq="";
            for(int j=0;j<ans.size();j++){
                int c=1;
                while(j+1<ans.size() && ans[j]==ans[j+1]){
                    c++;
                    j++;
                }
                nexsq += to_string(c) + ans[j];
            }
            ans=nexsq;
        }
        return ans;
    }
};