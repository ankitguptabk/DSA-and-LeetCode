class Solution {
public:
    int minFlips(string t){
        int ans=0;
        bool change=false;
        if(t[0]=='1') ans=1;
        for (int i=1;i<t.size();i++) {
            if(t[i]!=t[i-1]){
                ans++;
                change=true;
            }
        }
        if(t[0]=='0' && !change) return 0;
        return ans;
    }
};