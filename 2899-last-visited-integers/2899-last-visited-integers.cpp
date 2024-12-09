class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& n) {
        vector<int>seen,ans;
        int k=0;
        for(int i=0;i<n.size();i++){
            if(n[i]!=-1){
                seen.insert(seen.begin(),n[i]);
                k=0;
            }
            else{
                k++;
                if(k<=seen.size()){
                    ans.push_back(seen[k-1]);
                }
                else{
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};