class Solution {
public:
    int trap(vector<int>& h) {
        int ans=0,l=0,r=h.size()-1,lmax=0,rmax=0;
        while(l<=r){
            if(h[l]<h[r]){
                if(lmax<=h[l]){
                    lmax=h[l];
                }
                else{
                    ans+=lmax-h[l];
                }
                l++;
            }
            else{
                if(rmax<=h[r]){
                    rmax=h[r];
                }
                else{
                    ans+=rmax-h[r];
                }
                r--;
            }
        }
        return ans;
    }
};
