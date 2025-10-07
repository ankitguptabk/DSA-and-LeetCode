class Solution {
public:
    bool validPath(int n, vector<vector<int>>& e, int s, int d) {
        if(s == d) return true;
        if(e.empty()) return false;
        unordered_map<int, vector<int>> adj;
        for(auto &p : e){
            adj[p[0]].push_back(p[1]);
            adj[p[1]].push_back(p[0]);
        }
        vector<int> vis(n, 0);
        queue<int> q;
        q.push(s);
        vis[s] = 1;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            if(u==d) return true;
            for(int i : adj[u]){
                if(!vis[i]){
                    vis[i] = 1;
                    q.push(i);
                }
            }
        }
        return false;
    }
};
