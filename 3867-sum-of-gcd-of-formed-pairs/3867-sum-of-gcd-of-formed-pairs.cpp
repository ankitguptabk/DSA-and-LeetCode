class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<long long>p;
        vector<int>mx;
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=max(x, nums[i]);
            p.push_back(__gcd(nums[i],x));
        }
        sort(p.begin(),p.end());
        long long ans=0;
        if(nums.size()%2==1) p.erase(p.begin()+nums.size()/2);
        for(int i=0;i<p.size()/2;i++){
            ans+=__gcd(p[i],p[p.size()-1-i]);
        }
        return ans;
    }
};