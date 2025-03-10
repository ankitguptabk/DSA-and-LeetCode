class Solution {
public:
    int findPairs(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        set<pair<int,int>>uniquep;
        int ans=0;
        for(int i=0;i<n.size()-1;i++){
            for(int j=i+1;j<n.size();j++){
                if(abs(n[i]-n[j])==k){
                    pair<int,int>p={n[i],n[j]};
                    if(uniquep.find(p)==uniquep.end()){
                        uniquep.insert(p);
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};