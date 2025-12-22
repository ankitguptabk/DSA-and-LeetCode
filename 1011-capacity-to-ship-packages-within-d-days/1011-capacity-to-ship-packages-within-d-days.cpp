class Solution {
public:
    int shipWithinDays(vector<int>& w, int d) {
        int maxi_element=0, sum=0;
        for(int x:w){
            maxi_element=max(maxi_element,x);
            sum+=x;
        }
        int low= maxi_element, high=sum;
        int ans=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int days=1;
            int curr_weight=0;
            for(int x:w){
                if(curr_weight+x<=mid){
                    curr_weight+=x;
                }
                else{
                    days++;
                    curr_weight=x;
                }
            }
            if(days<=d){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};