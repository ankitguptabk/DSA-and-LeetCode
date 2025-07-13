class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& n, int k) {
    vector<vector<int>>ans;
    sort(n.begin(),n.end());
    for(int i=0;i<n.size();i+=3){
        vector<int>a;
        a.push_back(n[i]);
        a.push_back(n[i+1]);
        a.push_back(n[i+2]);
        ans.push_back(a);
        if(n[i+2]-n[i]>k) return {};
    }
    return ans;
 }
};