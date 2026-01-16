class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int n:nums){
            m[n]++;
        }
        int a=-1, b=-1;
        for(auto const &p:m){
            if(p.second==1){
                if(a==-1){
                    a=p.first;
                }
                else b=p.first;
            }
        }
        return {a,b};
    }
};