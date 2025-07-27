class Solution {
public:
    int minimumCardPickup(vector<int>& c) {
        int ans=INT_MAX;
        unordered_map<int,int>m;
        for(int i=0;i<c.size();i++){
            if(m.find(c[i])!=m.end()){
                ans=min(ans,i-m[c[i]]+1);
            }
            m[c[i]]=i;
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};