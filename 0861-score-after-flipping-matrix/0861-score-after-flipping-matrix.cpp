class Solution {
public:
    int matrixScore(vector<vector<int>>& g) {
        for(int i=0;i<g.size();i++){
            if(g[i][0]!=1){
                for(int j=0;j<g[0].size();j++){
                    if(g[i][j]==1){
                        g[i][j]=0;
                    }
                    else g[i][j]=1;
                }
            }
        }
        for(int i=0;i<g[0].size();i++){
            int one=0;
            for(int j=0;j<g.size();j++){
                if(g[j][i]==1){
                    one++;
                }
            }
            if(g.size()-one>one){
                for(int j=0;j<g.size();j++){
                    if(g[j][i]==1){
                        g[j][i]=0;
                    }
                    else g[j][i]=1;
                }
            }
        }
        long long ans=0;
         for(int i=0;i<g.size();i++){
            long long rowval=0;
            for(int j=0;j<g[0].size();j++){
                rowval=rowval*2+ g[i][j];
            }
            ans+=rowval;
         }
         return static_cast<int>(ans);
    }
};