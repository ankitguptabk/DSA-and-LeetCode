class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int ans=0;
        int low=1, high=position[position.size()-1]-position[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            int placed=1;
            int last=position[0];
            for(int i=1;i<position.size();i++){
                if(position[i]-last>=mid){
                    placed++;
                    last=position[i];
                }
            }
            if(placed>=m){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};