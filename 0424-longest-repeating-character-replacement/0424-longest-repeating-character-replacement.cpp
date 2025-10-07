class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0,a=0,x=0;
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'A']++;
            a=max(a,freq[s[i]-'A']);
            if((i-x+1)-a>k){
                freq[s[x]-'A']--;
                x++;
            }
            ans=max(ans,i-x+1);
        }
        return ans;
    }
};