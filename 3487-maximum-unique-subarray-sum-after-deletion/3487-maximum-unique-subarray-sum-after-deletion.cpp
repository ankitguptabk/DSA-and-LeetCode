class Solution {
public:
    int maxSum(vector<int>& n) {
        int ans=INT_MIN,sum=0;
        unordered_map<int,int>m;
        for(int i=0;i<n.size();i++){
            if(m.find(n[i])==m.end()&& n[i]>=0){
                sum+=n[i];
                m[n[i]]++;
            }
        }
        if(sum==0){
            for(int i=0;i<n.size();i++){
                ans=max(ans,n[i]);
            }
            return ans;
        }
        return sum;
    }
};