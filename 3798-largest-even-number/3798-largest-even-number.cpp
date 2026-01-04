class Solution {
public:
    string largestEven(string s) {
        string ans="";
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='2') return s.substr(0,i+1);
        }
        return "";
    }
};