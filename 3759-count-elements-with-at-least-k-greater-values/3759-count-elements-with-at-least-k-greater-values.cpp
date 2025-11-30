class Solution {
public:
    int countElements(vector<int>& n, int k) {
        int ans=0;
        unordered_map<int,int>m;
        for(int a:n){
            m[a]++;
        }
        sort(n.begin(),n.end());
        vector<int> x;
        x.push_back(n[0]);
        for(int i=1;i<n.size();i++){
            if(n[i]!=n[i-1]) x.push_back(n[i]);
        }
        int total = n.size();
        int prefix = 0;
        for(int i = 0; i<x.size(); i++) {
            int v = x[i];
            int cnt = m[v];
            int greater = total-prefix-cnt;
            if(greater>=k) ans += cnt;
            prefix+=cnt;
        }
        return ans;
    }
};