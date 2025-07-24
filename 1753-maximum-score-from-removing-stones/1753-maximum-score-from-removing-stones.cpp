class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        int x=max(a,max(b,c));
        int y=min(a,min(b,c));
        int z=a+b+c-(x+y);
        while((x>0 && y>0) || (x>0 && z>0) || (y>0 && z>0)){
            int p=x,q=y,r=z;
            x=max({p,q,r});
            y=min({p,q,r});
            z=p+q+r-(x+y);
            x--;
            z--;
            ans++;
        }
        return ans;
   }
};