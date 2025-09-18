class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()==k) return true;
        unordered_map<char,int>m;
        int odd=0;
        for(char c:s){
            m[c]++;
        }
        for(auto const &p:m){
            if(p.second%2==1) odd++;
        }
        if(odd>k || k>s.size()) return false;
        return true;
    }
};