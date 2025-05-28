class Solution {
public:
    int rearrangeCharacters(string s, string t){
        int ans=INT_MAX;
        unordered_map<char,int>m,n;
        for(char c:t){
            m[c]++;
        }
        for(char c:s){
            n[c]++;
        }
        for(auto const & p:m){
            if(n.find(p.first)==n.end()) return 0;
            ans=min(ans,n[p.first]/p.second);
        }
        return ans;
    }
};