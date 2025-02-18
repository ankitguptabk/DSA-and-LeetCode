class Solution {
public:
    bool judgeCircle(string m) {
        int x=0;
        int y=0;
        for(int i=0;i<m.size();i++){
            if(m[i]=='U'){
                y++;
            }
            else if(m[i]=='D'){
                y--;
            }
            if(m[i]=='L'){
                x--;
            }
            else if(m[i]=='R'){
                x++;
            }
        }
        if(x==0 && y==0) return true;
        return false;
    }
};