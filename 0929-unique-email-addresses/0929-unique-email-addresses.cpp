class Solution {
public:
    int numUniqueEmails(vector<string>& e) {
        int ans=0;
        unordered_set<string>set;
        for(int i=0;i<e.size();i++){
            string s=e[i];
            string x="";
            bool skip=false, domain=false;
            for(int j=0;j<s.size();j++){
                if(s[j]=='@'){
                    skip=false;
                    domain=true;
                }
                if(domain) x+=s[j];
                if(s[j]=='.'){
                    continue;
                }
                if(s[j]=='+'){
                    skip=true;
                    continue;
                }
                if(skip==false) x+=s[j];
            }
            set.insert(x);
        }
        return set.size();
    }
};