class Solution {
public:
    int countCompleteSubarrays(vector<int>& n) {
        unordered_set<int>s(n.begin(),n.end());
        int a=s.size(),ans=0;
        for(int i=0;i<n.size();i++){
            unordered_set<int>b;
            for(int j=i;j<n.size();j++){
                b.insert(n[j]);
                if(b.size()==a) ans++;
            }
        }
        return ans;
    }
};