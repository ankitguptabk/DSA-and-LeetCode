class Solution {
public:
    vector<int> recoverOrder(vector<int>& o, vector<int>& f) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<o.size();i++){
            for(int j=0;j<f.size();j++){
                if(o[i]==f[j]){
                    ans.push_back(o[i]);
                }
            }
        }
        return ans;
    }
};