class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>freq(26,0), freq_window(26,0);
        vector<int>ans;
        for(char c:p){
            freq[c-'a']++;
        }
        for(int i=0;i<s.size();i++){
            freq_window[s[i]-'a']++;
            if(i>=p.size()){
                freq_window[s[i-p.size()]-'a']--;
            }
            if(freq==freq_window){
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;
    }
};