class Solution {
public:
    bool isprime(int y){
        if(y==1) return false;
        for(int i=2;i*i<=y;i++){
            if(y%i==0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>ans;
        for(auto x:nums){
            ans[x]++;
        }
        for(auto const &p:ans){
            if(isprime(p.second)) return true;
        }
        return false;
    }
};