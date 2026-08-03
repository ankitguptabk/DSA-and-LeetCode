class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ans=0;
        int n=nums.size();
        double z=double(a)/double(b);
        for(int i=0;i<n;i++){
            int x=0,y=0;
            for(int j=i;j<n;j++){
                if(nums[j]%2){
                    y++;
                }
                else{
                    x++;
                }
                if(y>0){
                    double w=(double)(x)/(double)(y);
                    if(w<=z) ans++;
                }
            }
        }
        return ans;
    }
};