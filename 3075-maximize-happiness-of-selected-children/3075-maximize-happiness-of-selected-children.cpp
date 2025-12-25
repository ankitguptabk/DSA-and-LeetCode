class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans=0;
        int c=0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        int n= happiness.size();
        for(int i=0; i<n; i++){
            if(happiness[i]-c<0 || c==k) return ans;
            ans+=happiness[i]-c;
            c++;
        }
        return ans;
    }
};