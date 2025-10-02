class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& w, vector<int>& g) {
        vector<string>ans;
        int n=(int)w.size();
        string x=w[0];
        ans.push_back(x);
        for(int i=0;i<n-1;i++){
            if(i+1<n && g[i]==g[i+1]){
                continue;
            }
            else{
                if(i+1<n && g[i]!=g[i+1]) x=w[i+1];
                ans.push_back(x);
            }
        }
        return ans;
    }
};