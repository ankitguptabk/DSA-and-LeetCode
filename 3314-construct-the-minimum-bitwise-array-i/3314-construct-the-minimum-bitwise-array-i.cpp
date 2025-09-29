class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& n) {
        vector<int>ans;
        for(int i=0;i<n.size();i++){
            bool f=false;
            for(int j=1;j<n[i];j++){
                if((j | (j+1))==n[i]){
                    ans.push_back(j);
                    f=true;
                    break;
                }
            }
            if(!f) ans.push_back(-1);
        }
        return ans;
    }
};