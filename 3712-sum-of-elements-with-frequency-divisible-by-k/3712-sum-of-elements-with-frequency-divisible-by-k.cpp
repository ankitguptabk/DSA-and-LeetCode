class Solution {
public:
    int sumDivisibleByK(vector<int>& n, int k) {
        int ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<n.size();i++){
            m[n[i]]++;
        }
        for(auto const &p:m){
            if(p.second%k==0){
                ans+=p.first*p.second;
            }
        }
        return ans;
    }
};