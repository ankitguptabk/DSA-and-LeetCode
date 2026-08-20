class Solution {
public:
    int nearestDrone(vector<vector<int>>& d, vector<int>& t) {
        int m=INT_MAX;
        for(int i=0;i<d.size();i++){
            int md=abs(d[i][0]-t[0])+abs(d[i][1]-t[1]);
            if(md<=d[i][2]){
                m=min(m,md);
            }
        }
        for(int i=0;i<d.size();i++){
            int md=abs(d[i][0]-t[0])+abs(d[i][1]-t[1]);
            if(md==m && md<=d[i][2]) return i;
        }
        return -1;
    }
};