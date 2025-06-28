class Solution {
public:
    bool isPathCrossing(string p) {
        int x=0,y=0;
        set<pair<int,int>>vis;
        vis.insert({x,y});
        for(int i=0;i<p.size();i++){
            if(p[i]=='N')y++;
            else if(p[i]=='S') y--;
            else if(p[i]=='E') x++;
            else if(p[i]=='W') x--;
            if(vis.count({x,y})) return true;
            vis.insert({x,y});
        }
        return false;
    }
};