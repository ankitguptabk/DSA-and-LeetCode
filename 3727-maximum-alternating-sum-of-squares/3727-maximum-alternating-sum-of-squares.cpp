class Solution {
public:
    long long maxAlternatingSum(vector<int>& n) {
        long long ans=0;
        for(int i=0;i<n.size();i++){
            n[i]=abs(n[i]);
        }
        sort(n.begin(),n.end(),greater<int>());
        int x=n.size()/2;
        if(n.size()%2) x++;
        for(int i=0;i<x;i++){
            ans+=(n[i]*n[i]);
        }
        for(int i=x;i<n.size();i++){
            ans-=(n[i]*n[i]);
        }
        return ans;
    }
};