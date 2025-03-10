class Solution {
public:
    int findPairs(vector<int>& n, int k) {
        unordered_set<int>seen,unique;
        int ans=0;
        for(int i=0;i<n.size();i++){
            if(seen.count(n[i]-k)){
                unique.insert(n[i]-k);
            }
            if(seen.count(n[i]+k)){
                unique.insert(n[i]);
            }
            seen.insert(n[i]);
        }
        ans=unique.size();
        return ans;
    }
};