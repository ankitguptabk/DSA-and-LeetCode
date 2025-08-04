class Solution {
public:
    int maxBalancedShipments(vector<int>& w) {
        int maxi=w[0] , ans=0,ind=0;
        for(int i=1;i<w.size();i++){
            maxi=max(maxi,w[i-1]);
            if(maxi>w[i]){
                ans++;
                i++;
                maxi=0;
            }
        }
        return ans;
    }
};