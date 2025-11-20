class Solution {
public:
    int minimumPushes(string w) {
        int a=w.size();
        int ans=0;
        if(a>8) ans=8;
        else ans=a;
        a-=8;
        int i=2;
        while(a>0){
            int b=min(8,a);
            ans+=i*b;
            i++;
            a-=8;
        }
        return ans;
    }
};