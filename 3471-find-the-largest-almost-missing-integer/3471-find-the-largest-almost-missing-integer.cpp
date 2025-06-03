class Solution {
public:
    int largestInteger(vector<int>& n, int k) {
        int ans=-1;
        unordered_map<int,int>m;
        vector<int>x;
        x.push_back(n[0]);
        if(k>1 && k<n.size()){
            for(int i=1;i<n.size()-1;i++){
                x.push_back(n[i]);
                x.push_back(n[i]);
            }
            x.push_back(n[n.size()-1]);
        }
        else{
            x=n;
        }
        for(auto i:x){
            m[i]++;
        }
        for(auto const &p:m){
            if(p.second==1){
                ans=max(ans,p.first);
            }
        }
        if(k==n.size()){
            for(auto i:n) ans=max(ans,i);
        }
        return ans;
    }
};