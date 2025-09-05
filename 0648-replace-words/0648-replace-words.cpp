class Solution {
public:
    string replaceWords(vector<string>& d, string s) {
        unordered_set<string>dict(d.begin(),d.end());
        string w="",ans="";
        int k=0;
        for(int i=0;i<=s.size();i++){
            if(i<s.size() && s[i]!=' '){
                w+=s[i];
            }
            else{
                string root=w;
                string pref="";
                for(char c:w){
                    pref+=c;
                    if(dict.count(pref)){
                        root=pref;
                        break;
                    }
                }
                if(!ans.empty()) ans+=" ";
                ans+=root;
                w="";
            }
        }
        return ans;
    }
};