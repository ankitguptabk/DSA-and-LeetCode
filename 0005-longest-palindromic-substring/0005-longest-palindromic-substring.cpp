class Solution {
public:
    string longestPalindrome(string s){
        string ans="";
        for(int k=0;k<s.size();k++){
            string p="";
            for(int i=k;i<s.size();i++){
                p+=s[i];
                bool palin=true;
                for(int j=0;j<p.size()/2;j++){
                    if(p[j]!=p[p.size()-1-j]){
                        palin=false;
                        break;
                    }
                }
                if(palin && p.size()>ans.size()) ans=p;
            }
        }
        return ans;
    }
};
