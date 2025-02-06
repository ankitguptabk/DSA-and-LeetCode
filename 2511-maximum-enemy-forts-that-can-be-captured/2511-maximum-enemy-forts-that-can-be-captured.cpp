class Solution {
public:
    int captureForts(vector<int>& f) {
        int ans=0,a=-1,c=0;
        for(int i=0;i<f.size();i++){
            if(f[i]==1 || f[i]==-1){
                if( a!=-1 && f[a]!=f[i] ) ans=max(c,ans);
                a=i;
                c=0;
            }
            else if(f[i]==0) c++;
        }
        return ans;
    }
};