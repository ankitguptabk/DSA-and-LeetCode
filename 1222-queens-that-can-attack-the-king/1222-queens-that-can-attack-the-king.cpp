class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>>ans;
        int n=queens.size();
        int xking=king[0], yking=king[1];
        vector<vector<int>>temp;
        for(int i=0;i<n;i++){
            int x=queens[i][0], y=queens[i][1];
            if(abs(xking-x)==abs(yking-y) || ((x==xking && y!=yking)||(x!=xking && y==yking))){
                temp.push_back({x,y});
            }
        }
        vector<vector<int>>best(8,vector<int>());
        vector<int>dist(8,INT_MAX);
        for(auto &q:temp){
            int x=q[0],y=q[1];
            int dx=(x-xking), dy=(y-yking);
            int d=max(abs(dx),abs(dy));
            int dir=-1;
            if(dx<0 && dy==0) dir=0;
            else if(dx>0 && dy==0) dir=1;
            else if(dx==0 && dy<0) dir=2;
            else if(dx==0 && dy>0) dir=3;
            else if(dx<0 && dy<0) dir=4;
            else if(dx<0 && dy>0) dir=5;
            else if(dx>0 && dy>0) dir=6;
            else if(dx>0 && dy<0) dir=7;

            if(dir!=-1 && d<dist[dir]){
                dist[dir]=d;
                best[dir]=q;
            }
        }
        for(auto &b:best){
            if(!b.empty()) ans.push_back(b);
        }
        return ans;
    }
};