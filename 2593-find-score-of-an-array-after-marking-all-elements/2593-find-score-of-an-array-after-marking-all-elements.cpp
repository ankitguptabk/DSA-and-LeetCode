class Solution {
public:
    long long findScore(vector<int>& nums) {
       long long ans=0;
       int n=nums.size();
       vector<pair<int,int>>a;
       for(int i=0;i<nums.size();i++){
        a.push_back({nums[i],i});
       }
       sort(a.begin(),a.end());
       vector<bool>remove(n,false);
       for(auto const &p:a){
        int val=p.first;
        int idx=p.second;
        if(!remove[idx]){
            ans+=val;
            remove[idx]=true;
            if(idx-1>=0) remove[idx-1] =true;
            if(idx+1<n) remove[idx+1]=true;
        }
       }
       return ans;
    }
};