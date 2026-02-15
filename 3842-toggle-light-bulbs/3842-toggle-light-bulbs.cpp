class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
        vector<int>ans;
        unordered_map<int,int>m;
        for(int x:bulbs){
            m[x]++;
        }
        for(auto const &p:m){
            if(p.second%2==1){
                ans.push_back(p.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};