class Solution {
public:
    int numTilePossibilities(string t) {
        unordered_map<char,int>m;
        for(auto x:t){
            m[x]++;
        }
        return countpermute(m);
    }
    int countpermute(unordered_map<char,int>&m){
        int ans=0;
        for(auto &p:m){
            if(p.second==0) continue;
            p.second--;
            ans++;
            ans+=countpermute(m);
            m[p.first]++;
        }
        return ans;
    }
};