class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<char,int>m;
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int ans=0;
        for(auto const &p:m){
            ans+= (p.first-'0')*p.second;
        }
        return ans;
    }
};