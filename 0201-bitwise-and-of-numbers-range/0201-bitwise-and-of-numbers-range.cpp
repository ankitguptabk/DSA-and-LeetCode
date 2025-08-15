class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        if(l==0) return 0;
        int ans=l;
        while(l<r){
            r=r&(r-1);
            ans=ans &r;
            if(ans==0) return 0;
        }
        return ans;
    }
};