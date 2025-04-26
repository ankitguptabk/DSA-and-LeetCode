class Solution {
public:
    string smallestPalindrome(string s) {
        string y=s.substr(0,s.size()/2);
        sort(y.begin(),y.end());
        string z=y;
        reverse(z.begin(),z.end());
        string ans="";
        if(s.size()%2!=0){
            ans=y+s[s.size()/2]+z;
        }
        else ans=y+z;
        return ans;
    }
};