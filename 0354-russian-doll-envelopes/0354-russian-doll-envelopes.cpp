class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& e) {
        int x=INT_MIN,y=INT_MIN;
        sort(e.begin(),e.end(),[](const vector<int>&a, const vector<int>&b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }
            return a[0]<b[0];
        });
        vector<int>tails;
        for (const auto& env : e) {
            int h =env[1];
            auto it =lower_bound(tails.begin(), tails.end(), h);
            if (it == tails.end()) tails.push_back(h);
            else *it = h;
        }
        return static_cast<int>(tails.size()); 
    }
};