class Solution {
public:
    int mirrorFrequency(string s) {
        int ans=0;
        unordered_map<char,int> f;
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(f[c]==0) continue;
            if(c>='a' && c<='z'){
                char mirror = 'z' -(c - 'a');
                ans += abs(f[c] - f[mirror]);
                f[c]=0;
                f[mirror]=0;
            }
            else if(c>='0' && c<='9'){
                char mirror = '9' -(c - '0');
                ans += abs(f[c] -f[mirror]);
                f[c]=0;
                f[mirror]=0;
            }
        }
        return ans;
    }
};