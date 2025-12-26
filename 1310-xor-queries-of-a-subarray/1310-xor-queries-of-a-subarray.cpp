class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> pref(n,0);
        int x=0;
        for(int i=0; i<n; i++){
            x^= arr[i];
            pref[i]=x;
        }
        vector<int> ans;
        int m= queries.size();
        for(int i=0; i<m; i++){
            int a=queries[i][0];
            int b=queries[i][1];
            if(a>0) ans.push_back(pref[b]^pref[a-1]);
            else ans.push_back(pref[b]);
        }
        return ans;
    }
};