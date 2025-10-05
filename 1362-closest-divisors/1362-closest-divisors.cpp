class Solution {
public:
    vector<int> closestDivisors(int n) {
        int x=n+1,y=n+2;
        int ans=INT_MAX;
        int p=1,q=n;
        int c=0,d=0;
        int limit=sqrt(y);
        while(p<=limit){
            if(x%p==0){
                q=x/p;
                if(abs(p-q)<ans){
                    ans=abs(p-q);
                    c=p,d=q;
                }
            }
            else if(y%p==0){
                q=y/p;
                if(abs(p-q)<ans){
                    ans=abs(p-q);
                    c=p,d=q;
                }
            }
            p++;
        }
        return {c,d};
    }
};