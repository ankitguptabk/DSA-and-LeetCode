class Solution {
public:
    string processStr(string s) {
        string ans="";
        int c=0;
        for(char x:s){
            if(x>='a'&& x<='z') c++;
        }
        
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z') ans+=s[i];
            else if(s[i]=='#' && c>0){
                ans+=ans;
            }
            else if(s[i]=='%' && c>0){
                reverse(ans.begin(),ans.end());
            }
            else if(s[i]=='*'&& c>0 && !ans.empty()){
                ans.erase(ans.size()-1,1);
            }
        }
        return ans;
    }
};