class Solution {
public:
    int xorAfterQueries(vector<int>& n, vector<vector<int>>& q) {
        int a=1e9+7;
        for(int i=0;i<q.size();i++){
            int idx=q[i][0],r=q[i][1],k=q[i][2],v=q[i][3];
            for(int j=0;j<n.size();j++){
                if(idx>n.size() || idx>r){
                    break;
                }
                else{
                    long long y=(long long)n[idx]*v;
                    y%=a;
                    n[idx]=(int)y;
                    idx+=k;
                }
            }
        }
        int ans=0;
        for(int x:n){
            ans^=x;
        }
        return ans;
    }
};