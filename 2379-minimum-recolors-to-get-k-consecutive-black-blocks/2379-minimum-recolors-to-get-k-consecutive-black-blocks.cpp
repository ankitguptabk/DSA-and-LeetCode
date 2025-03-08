class Solution {
public:
    int minimumRecolors(string b, int k) {
        int ans=INT_MAX,x=0,y=0;
        for(int i=0;i<b.size();i++){
            if(b[i]=='B')x++;
            else y++;
            if(i>=k-1){
                ans=min(ans,y);
                if(b[i+1-k]=='W') y--;
            }
        }
        return ans;
    }
};