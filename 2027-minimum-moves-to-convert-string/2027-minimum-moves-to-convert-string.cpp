class Solution {
public:
    int minimumMoves(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='X'){
                s[i]=='0';
                if(i<s.size()-1) s[i+1]='0';
                if(i<s.size()-2) s[i+2]='0';
                ans++;
                i+=2;
            }
        }
        return ans;
    }
};