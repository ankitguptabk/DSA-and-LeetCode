class Solution {
public:

int solve(unordered_map<int,int>&mp,int x){
    vector<pair<int,int>>ans;
    for(auto &i:mp){
        ans.push_back({i.second,i.first});        
    }
    int res=0;
    auto cmp=[](auto a,auto b){
        if(a.first==b.first)return a.second>b.second;
        return a.first>b.first;        
    };
    sort(ans.begin(),ans.end(),cmp);
    for(int i=0;i<ans.size();i++){
        res+=(ans[i].first)*ans[i].second;
        x-=1;
        if(x==0)break;
    }
    return res;
}
    vector<int> findXSum(vector<int>& n, int k, int x) {
        vector<int>ans(n.size()-k+1);
         for(int i=0;i<n.size()-k+1;i++){
            unordered_map<int,int>mp;
            for(int j=i;j<k+i;j++){               
                mp[n[j]]++;
            } 
            int sum=solve(mp,x);
            ans[i]=sum;
         }
         return ans;
    }
};