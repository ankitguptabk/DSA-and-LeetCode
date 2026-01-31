class Solution {
public:
    string reverseByType(string s) {
        string ans="";
        int n=s.size();
        vector<char> lower_case, spl_char;
        for(int i=0; i<n; i++){
            if(s[i]>='a' && s[i]<='z'){
                lower_case.push_back(s[i]);
            }
            else{
                spl_char.push_back(s[i]);
            }
        }
        reverse(lower_case.begin(), lower_case.end());
        reverse(spl_char.begin(), spl_char.end());
        int i=0, j=0;
        for(int k=0;k<n;k++){
            if(s[k]>='a' && s[k]<='z'){
                ans+=lower_case[i++];
            }
            else ans+=spl_char[j++];
        }
        return ans;
    }
};