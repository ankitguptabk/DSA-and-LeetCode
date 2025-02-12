class Solution {
public:
    int distributeCandies(int n, int l) {
        int ans=0;
        for(int a=0;a<=min(n,l);a++){
            for(int b=0;b<=min(n-a,l);b++){
                int c=n-a-b;
                if(c>=0&& c<=l) ans++;
            }
        }
        return ans;
    }
};