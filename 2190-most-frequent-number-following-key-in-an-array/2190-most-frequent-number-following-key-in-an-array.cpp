class Solution {
public:
    int mostFrequent(vector<int>& n, int k) {
        int ans=0;
        int t=0;
        unordered_map<int,int>m;
        for(int i=0;i<n.size()-1;i++){
            if(n[i]==k){
                m[n[i+1]]++;
            }
        }
        for(auto const p:m){
            if(p.second>ans) ans=p.second;
        }
        for(auto const p:m){
            if(p.second==ans) t=p.first;
        }
        return t;
    }
};