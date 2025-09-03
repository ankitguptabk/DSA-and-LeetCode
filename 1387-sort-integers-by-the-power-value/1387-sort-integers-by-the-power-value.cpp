class Solution {
public:
    int getKth(int lo, int hi, int k) {
        int ans=0;
        vector<pair<int,int>>v;
        vector<int>x;
        for(int i=lo;i<=hi;i++){
            int x=0,y=i;
            while(y!=1){
                if(y%2==0){
                    y/=2;
                    x++;
                }
                else{
                    y=3*y+1;
                    x++;
                }
            }
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        return v[k-1].second;
    }
};