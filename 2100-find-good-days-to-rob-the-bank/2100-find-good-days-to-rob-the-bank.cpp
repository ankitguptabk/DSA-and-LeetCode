class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& s, int t){
        vector<int> ans;
        if(s.size() < 2*t) return ans;

        vector<int>dec(s.size(),0), inc(s.size(),0);

        for(int i = 1; i < s.size(); i++){
            if(s[i] <= s[i - 1]) dec[i] = dec[i-1]+1;
        }
        for(int i = s.size() - 2; i >= 0; i--){
            if(s[i] <= s[i + 1]) inc[i] = inc[i+1]+1;
        }
        for(int i = t; i < s.size() - t; i++){
            if(dec[i] >= t && inc[i] >= t) ans.push_back(i);
        }
        return ans;
    }
};
