class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& pos, string s) {
        vector<int>a;
        for(int i=0;i<s.size();i++){
            int ans=0,x=pos[0],y=pos[1];
            for(int j=i;j<s.size();j++){
                if(s[j]=='L' ){
                    y--;
                }
                else if(s[j]=='R'){
                    y++;
                }
                else if(s[j]=='U'){
                    x--;
                }
                else if(s[j]=='D'){
                    x++;
                }
                if(x<0 || x>=n || y<0 || y>=n){
                    break;
                }
                else {
                    ans++;
                }
            }
            a.push_back(ans);
        }
        return a;
    }
};