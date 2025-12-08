class Solution {
public:
    vector<int> sortByReflection(vector<int>& n) {
       vector<pair<int,int>>v;
       for(int i=0;i<n.size();i++){
        string x=bitset<32>(n[i]).to_string();
        int p=x.find('1');
        x=x.substr(p);
        reverse(x.begin(),x.end());
        int a=stoi(x,nullptr,2);
        v.push_back({a,n[i]});
       }
       sort(v.begin(),v.end(),[&](const pair<int,int>&p,const pair<int,int>&q){
        if(p.first==q.first) return p.second<q.second;
        return p.first<q.first;
       });
       vector<int>ans;
       for(auto x:v){
        ans.push_back(x.second);
       }
       return ans;
    }
};