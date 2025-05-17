class Solution {
public:
    bool checkPowersOfThree(int n) {
        int a=n;
        int x=0;
        while(a>1){
            a/=3;
            x++;
        }
        for(int i=x;i>=0;i--){
            int p=pow(3,i);
            if(n>=p) n-=p;
        }
        return n==0;
    }
};