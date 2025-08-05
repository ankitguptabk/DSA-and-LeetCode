class Solution {
public:
    int minSetSize(vector<int>& a) {
        unordered_map<int,int>m;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
        }
        vector<pair<int,int>>b(m.begin(),m.end());
        sort(b.begin(),b.end(), [](pair<int,int>&x, pair<int,int> & y){
            return x.second>y.second;
        }
        );
        int ans=0,z=0;
        for(auto const &p:b){
            z+=p.second;
            ans++;
            if(z>=a.size()/2){
                return ans;
            }
        }
        return ans;
    }
};