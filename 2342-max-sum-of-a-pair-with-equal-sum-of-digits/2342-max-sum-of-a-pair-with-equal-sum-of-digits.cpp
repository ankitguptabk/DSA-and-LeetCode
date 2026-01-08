class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int ans=INT_MIN;
        int n=nums.size();
        vector<pair<long long,long long>>m;
        for(int i=0;i<n;i++){
            string s=to_string(nums[i]);
            long long curr=0;
            for(int j=0;j<s.size();j++){
                curr+=s[j]-'0';
            }
            m.push_back({curr,nums[i]});
        }
        sort(m.begin(),m.end());
        for(int i=0;i<n-1;i++){
            if(m[i].first==m[i+1].first){
                ans=max(ans,(int)m[i].second+(int)m[i+1].second);
            }
        }
        if(ans==INT_MIN) return -1;
        return ans;
    }
};