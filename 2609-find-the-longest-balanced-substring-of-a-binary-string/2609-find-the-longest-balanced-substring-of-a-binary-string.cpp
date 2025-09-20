class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        bool o=false, z=false;
        int ans=0,c=0,d=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                o=true;
                c++;
                d=0;
            }
            if(s[i]=='1'){
                z=true;
                d++;
                if(o && z) ans=max(ans,2*min(c,d));
                if(i+1<s.size() && s[i+1]=='0'){
                    if(o && z){
                        ans=max(ans,2*min(c,d));
                        c=0,d=0;
                        o=false;
                        z=false;
                    }
                }
            }
        }
        return ans;
    }
};