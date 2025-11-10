class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n,'a');
        for(int i=ans.size()-1;i>=0;i--){
            if(n+25<=k){
                ans[i]='z';
                n+=25;
            }
            else{
                ans[i]='a'+k-n;
                n=k;
                return ans;
            }
        }
        return ans;
    }
};