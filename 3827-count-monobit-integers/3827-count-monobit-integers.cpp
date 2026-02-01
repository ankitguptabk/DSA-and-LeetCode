class Solution {
public:
    int countMonobit(int n) {
        int ans=1;
        int x=1, p=1;
        while(x<=n){
            if(x<=n){
                ans++;
            }
            x+=pow(2,p);
            p++;
        }
        return ans;
    }
};