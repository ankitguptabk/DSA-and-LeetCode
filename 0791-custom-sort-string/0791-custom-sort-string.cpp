class Solution {
public:
    string customSortString(string o, string s) {
        string ans="";
        for(int i=0;i<o.size();i++){
            for(int j=0;j<s.size();j++){
                if(o[i]==s[j]){
                    ans+=o[i];
                }
            }
        }
        for (int j = 0; j < s.size(); j++) {
            bool found = false;
            for (int i = 0; i < o.size(); i++) {
                if (s[j]==o[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                ans += s[j];
            }
        }
        return ans;
    }
};