class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& d) {
        vector<int>ans(d.size(),-1);
        vector<int>pos;
        sort(d.begin(),d.end());
        for(int i=0;i<d.size();i++){
            pos.push_back(i);
        }
        for(int c:d){
            ans[pos[0]]=c;
            pos.erase(pos.begin());
            if(!pos.empty()){
                pos.push_back(pos[0]);
                pos.erase(pos.begin());
            }
        }
        return ans;
    }
};