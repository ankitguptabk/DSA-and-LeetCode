class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            vector<int>x(a.begin(),a.begin()+i+1);
            vector<int>y(b.begin(),b.begin()+i+1);
            int z=0;
            unordered_map<int,int>m;
            for(int j=0;j<x.size();j++){
                m[x[j]]++;
                m[y[j]]++;
            }
            for(auto const &p:m){
                if(p.second>1){
                    z++;
                }
            }
            ans.push_back(z);
        }
        return ans;
    }
};