class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int c1=0,c0=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='1') c1++;
                else c0++;

                if(c1<=k || c0<=k){
                    ans++;
                }
                else break;
            }
        }
        return ans;
    }
};