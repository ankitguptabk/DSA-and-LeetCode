class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int r, int c, int rc, int cc) {
        vector<int>d;
        vector<vector<int>>a;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                a.push_back({i,j});
            }
        }
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                int disti=abs(rc-a[i][0])+abs(cc-a[i][1]);
                int distj=abs(rc-a[j][0])+abs(cc-a[j][1]);
                if(disti>distj){
                    swap(a[i],a[j]);
                }
            }
        }
        return a;
    }
};