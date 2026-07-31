class Solution {
public:
    bool dfs(vector<int>&arr, int i, vector<bool>&vis){
        if(i<0 || i>arr.size()-1 || vis[i]){
            return false;
        }
        if(arr[i]==0) return true;
        vis[i]=true;
        bool forward=dfs(arr, i+arr[i], vis);
        if(forward) return true;

        bool backward=dfs(arr, i-arr[i], vis);
        if(backward) return true;
        
        return false;
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool>vis(arr.size(),false);
        return dfs(arr, start, vis);
    }
};