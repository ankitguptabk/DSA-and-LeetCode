class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        vector<int>x={a,b,c};
        while((x[0]>0 && x[1]>0) || (x[0]>0 && x[2]>0) || (x[1]>0 && x[2]>0)){
            sort(x.begin(),x.end());
            int p=x[2],q=x[1];
            p--,q--;
            x[2]=p,x[1]=q;
            ans++;
        }
        return ans;
   }
};