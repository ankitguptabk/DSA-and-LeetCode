class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int>f;
            int x=0;
            for(int j=i;j<s.size();j++){
                f[s[j]]++;
                if(f[s[j]]>2) break;
                x++;
                ans=max(ans,x);
            }
        }
        return ans;
    }
};