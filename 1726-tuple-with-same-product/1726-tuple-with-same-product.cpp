class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int n=nums.size();
        vector<int>product;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                product.push_back(nums[i]*nums[j]);
            }
        }
        sort(product.begin(),product.end());
        int sz=product.size();
        unordered_map<int,int>m;
        for(int i=0;i<sz;i++){
            m[product[i]]++;
        }
        for(auto const &p:m){
            if(p.second>1){
                ans+=(p.second*(p.second-1)/2)*8;
            }
        }
        return ans;
    }
};