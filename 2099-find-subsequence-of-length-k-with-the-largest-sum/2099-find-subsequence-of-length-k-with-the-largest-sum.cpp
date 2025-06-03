class Solution {
public:
    vector<int> maxSubsequence(vector<int>& n, int k) {
        vector<int>ans;
        vector<bool>used(n.size(),false);
        while(k--){
            int maxv=INT_MIN,ind=-1;
            for(int i=0;i<n.size();i++){
                if(!used[i] && n[i]>maxv){
                    maxv=n[i];
                    ind=i;
                }
            }
            if(ind!=-1){
                used[ind]=true;
            }
        }
        for(int i=0;i<n.size();i++){
            if(used[i]){
                ans.push_back(n[i]);
            }
        }
        return ans;
    }
};