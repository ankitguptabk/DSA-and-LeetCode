class Solution {
public:
    int maxScore(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int z=0,o=0;
            for(int k=0;k<=i;k++ ){
                if(s[k]=='0') z++;
                if(k==s.size()-1) z-=1;
            }
            for(int k=i+1;k<s.size();k++){
                if(s[k]=='1') o++;
            }
            ans=max(ans,z+o);
        }
        return ans;
    }
};