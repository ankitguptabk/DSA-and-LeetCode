class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& tri, vector<int>& t) {
        int a=t[0],b=t[1],c=t[2];
        int p=0,q=0,r=0;
        for(int i=0;i<tri.size();i++){
            int x=tri[i][0], y=tri[i][1], z=tri[i][2]; 
            if(x<=a && y<=b && z<=c){
                if(x>p) p=x;
                if(y>q) q=y;
                if(z>r) r=z;
            }
        }
        return p==a && q==b && r==c;
    }
};