class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int ans=INT_MAX;
        unordered_map<int,int>m;
        for(auto n:nums){
            m[n]++;
        }
        int maxi=INT_MIN;
        vector<int>found;
        for(auto const & p:m){
            if(p.second>maxi){
                maxi=p.second;
            }
        }
        for(auto const & p:m){
            if(p.second==maxi){
                found.push_back(p.first);
            }
        }
        for(int i=0;i<found.size();i++){
            int l=0,r=nums.size()-1;
            int x=INT_MAX,y=INT_MAX;
            while(l<nums.size()){
                if(nums[l]==found[i]){
                    x=l;
                    break;
                }
                l++;
            }
            while(r>=0){
                if(nums[r]==found[i]){
                    y=r;
                    break;
                }
                r--;
            }
            ans=min(ans,y-x+1);
        }
        return ans;
    }
};