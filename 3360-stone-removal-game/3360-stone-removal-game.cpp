class Solution {
public:
    bool canAliceWin(int n) {
        int a=10;
        int c=0;
        if(n<10) return false;
        while(n>0){
            n-=a;
            c++;
            a--;
            if(n<a) break;
        }
        return c%2;
    }
};