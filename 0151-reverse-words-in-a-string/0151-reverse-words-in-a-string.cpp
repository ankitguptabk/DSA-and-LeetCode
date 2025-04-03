class Solution {
public:
    string reverseWords(string s) {
        vector<string>x;
        string w="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                w+=s[i];
            }
            else{
                if(w!="") x.push_back(w);
                w="";
            }
        }
        if(w!="")x.push_back(w);
        string ans="";
        for(int i=x.size()-1;i>=1;i--){
            ans+=x[i];
            ans+=" ";
        }
        ans+=x[0];
        return ans;
    }
};