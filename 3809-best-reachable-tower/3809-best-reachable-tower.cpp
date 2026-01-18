class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& t, vector<int>& c, int r) {
        int n=t.size();
        int xmin=INT_MAX, ymin=INT_MAX;
        int fact=-1;
        vector<bool> found(n,false);
        for(int i=0;i<n;i++){
            int x=t[i][0], y=t[i][1], z=t[i][2];
            int md=abs(x-c[0])+abs(y-c[1]);
            if(md<=r){
                fact=max(fact,z);
                found[i]=true;
            }
        }
        if(fact==-1) return {-1,-1};
        for(int i=0;i<n;i++){
            int x=t[i][0], y=t[i][1], z=t[i][2];
            if(found[i] && z==fact){
                if(x<xmin){
                    xmin=x;
                    ymin=y;
                }
                else if(x==xmin && y<=ymin){
                    xmin=x;
                    ymin=y;
                }
            }
        }
        return {xmin,ymin};
    }
};