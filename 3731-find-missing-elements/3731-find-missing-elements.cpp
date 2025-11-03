class Solution {
public:
    vector<int> findMissingElements(vector<int>& n) {
       vector<int>ans; 
       sort(n.begin(),n.end());
       int x=n[0]+1;
       for(int i=1;i<n.size();i++){
        while(x<n[i]){
            ans.push_back(x);
            x++;
        }
        x++;
       }
       return ans;
    }
};