class Solution {
public:
    int minOperations(int n) {
        vector<int>a;
        for(int i=0;i<n/2;i++){
            a.push_back(2*i+1);
        }
        int ans=0;
        for(auto x:a){
            ans+=abs(n-x);
        }
        return ans;
    }
};