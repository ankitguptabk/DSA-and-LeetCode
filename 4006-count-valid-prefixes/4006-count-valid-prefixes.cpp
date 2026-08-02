class Solution {
public:
    int countValidPrefixes(string s) {
        int ans=0, z=0, o=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') z++;
            else o++;
            if(abs(o-z)<=1) ans++;
        }
        return ans;
    }
};