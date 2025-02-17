class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        if(s==t) return ans;
        unordered_map<char,int>m,n;
        for(char c:s){
            m[c]++;
        }
        for(char c:t){
            n[c]++;
        }
        for(auto it:m){
            if(n.find(it.first)!=n.end()){
                if(it.second>n[it.first]){
                    ans+=(it.second-n[it.first]);
                }
            }
            else{
                ans+=it.second;
            }
        }
        return ans;
    }
};