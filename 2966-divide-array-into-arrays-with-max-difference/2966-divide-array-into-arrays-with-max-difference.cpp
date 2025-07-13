class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& n, int k) {
    vector<vector<int>>ans;
    sort(n.begin(),n.end());
    for(int i=0;i<n.size();i+=3){
        if(n[i+2]-n[i]>k) return {};
        ans.push_back({n[i],n[i+1],n[i+2]});
    }
    return ans;
 }
};