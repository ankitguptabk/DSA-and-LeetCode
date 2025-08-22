class Solution {
public:
    int minimumLength(string s) {
        int ans=0;
        unordered_map<char,int>m;
        for(char x:s){
            m[x]++;
        }
        for(auto const &p:m){
            if(p.second%2==0){
                ans+=2;
            }
            else ans+=1;
        }
        return ans;
    }
};