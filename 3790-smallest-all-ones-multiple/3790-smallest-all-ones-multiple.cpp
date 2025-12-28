class Solution {
public:
    int minAllOneMultiple(int k) {
        int num=0;
        int len=1;
        while(len<=k){
            num=(num*10+1)%k;
            if(num==0) return len;
            len++;
        }
        return -1;
    }
};