class Solution {
public:
    int findTheLongestSubstring(string s) {
        int ans = 0;
        unordered_map<int,int> m;
        m[0] = -1;
        int mask = 0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='a') mask^=1;
            else if(s[j]=='e') mask^=2;
            else if(s[j]=='i') mask^=4;
            else if(s[j]=='o') mask^=8;
            else if(s[j]=='u') mask^=16;
            if(m.find(mask)!=m.end()){
                ans=max(ans,j-m[mask]);
            }
            else {
                m[mask]=j;
            }
        }
        return ans;
    }
};
