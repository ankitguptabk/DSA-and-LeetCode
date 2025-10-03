class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans=0;
        unordered_map<char,int>f;
        int l=0;
        for(int r=0;r<s.size();r++){
            f[s[r]]++;
            while(f[s[r]]>2){
                f[s[l]]--;
                l++;
            }
            int x=0;
            for(auto const &p:f){
                x+=p.second;
            }
            if(x>ans) ans=x;
        }
        return ans;
    }
};