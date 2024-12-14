class Solution {
public:
    bool pown(int n){
        if(n<=0) return false;
        else if(n==1) return true;
        else if(n%3!=0){
            return false;
        }
        return pown(n/3);
    }
    bool isPowerOfThree(int n) {
        return pown(n);
    }
};