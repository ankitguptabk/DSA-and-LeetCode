class Solution {
public:
    int maxDistinct(string s) {
        vector<bool>x(26,false);
        for(char c:s){
            x[c-'a']=true;
        }
        int ans=0;
        for(auto y:x){
            if(y==true) ans++;
        }
        return ans;
    }
};