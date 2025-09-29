class Solution {
public:
    long long pickGifts(vector<int>& g, int k) {
        long long ans=0;
        for(int i=0;i<k;i++){
            long long x=(long long)(*max_element(g.begin(),g.end()));
            long long y=sqrt(x);
            for(int j=0;j<g.size();j++){
                if((long long)g[j]==x){
                    g[j]=(int)y;
                    break;
                }
            }
        }
        for(int i=0;i<g.size();i++){
            ans+=(long long)g[i];
        }
        return ans;
    }
};