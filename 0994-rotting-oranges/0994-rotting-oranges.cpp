class Solution { 
public:     
    int orangesRotting(vector<vector<int>>& g) {        
        int r = g.size(), c = g[0].size(), f = 0, t = 0;
        queue<pair<int, int>> q;

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(g[i][j] == 2) q.push({i, j});
                else if(g[i][j] == 1) f++;
            }
        }

        vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        while(!q.empty() && f) {
            int s = q.size();
            while(s--) {
                auto [x, y] = q.front();
                q.pop();
                for(auto [dx, dy] : d) {
                    int nx = x + dx, ny = y + dy;
                    if(nx >= 0 && ny >= 0 && nx < r && ny < c && g[nx][ny] == 1) {
                        g[nx][ny] = 2;
                        q.push({nx, ny});
                        f--;
                    }
                }
            }
            t++;
        }
        if(f) return -1;
        return t;
    }
};
