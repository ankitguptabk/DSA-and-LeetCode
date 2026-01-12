class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& w) {
        int m=w.size(), n=w[0].size();
        const int inf=1e9;
        vector<vector<int>>h(m, vector<int>(n,inf));
        for(int i=0;i<w.size();i++){
            for(int j=0;j<w[0].size();j++){
                if(w[i][j]==1) h[i][j]=0;
            }
        }
        bool changed=true;
        while(changed){
            changed=false;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    int old=h[i][j];
                    if(i>0) h[i][j]=min(h[i][j],h[i-1][j]+1);
                    if(i<m-1) h[i][j]=min(h[i][j],h[i+1][j]+1);
                    if(j>0) h[i][j]=min(h[i][j],h[i][j-1]+1);
                    if(j<n-1) h[i][j]=min(h[i][j],h[i][j+1]+1);

                    if(h[i][j]!=old) changed=true;
                }
            }
        }
        return h;
    }
};