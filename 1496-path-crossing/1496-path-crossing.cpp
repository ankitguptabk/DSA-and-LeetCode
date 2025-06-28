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
            if( i+1<p.size() && ((p[i]=='N' && p[i+1]=='S') || (p[i]=='S' && p[i+1]=='N') || (p[i]=='E' && p[i+1]=='W') || (p[i]=='W' && p[i+1]=='E') )) return true;
            else if(i+3 <p.size() && (p[i] !=p[i+1] && p[i+1]!=p[i+2] && p[i+2]!=p[i]&& p[i+2]!=p[i+3] && p[i+3]!=p[i+1] && p[i+3]!=p[i])) return true; 
        }
        return false;
    }
};