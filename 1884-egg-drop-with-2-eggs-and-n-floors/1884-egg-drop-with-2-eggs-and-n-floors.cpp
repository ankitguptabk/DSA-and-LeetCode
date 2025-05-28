class Solution {
public:
    int twoEggDrop(int n) {
        int ans=0;
        while(n>0){
            ans++;
            n-=ans;
        }
        return ans;
    }
};