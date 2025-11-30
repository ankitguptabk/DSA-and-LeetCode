class Solution {
public:
    int maxDistinct(string s) {
        vector<bool>x(26,false);
        int ans=0;
        for(char c:s){
            if(!x[c-'a']){
                x[c-'a']=true;
                ans++;
            }
        }
        return ans;
    }
};