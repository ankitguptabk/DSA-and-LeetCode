class Solution {
public:
    int minimumDistance(vector<int>& n) {
        long long ans=LLONG_MAX;
        if(n.size()<3) return -1;
        for(long long i=0;i<(long long)n.size();i++){
            int c=0,x=0,y=0;
            for(long long j=i+1;j<(long long)n.size();j++){
                if(n[i]==n[j]){
                    c++;
                    if(c==1) x=j;
                    else if(c==2){
                        y=j;
                        long long dist=(x - i)+(y - x)+(y - i);
                        if (dist <ans) ans=dist;
                        break;
                    }
                }
            }
        }
        if(ans==LLONG_MAX) return -1;
        return (int)ans;
    }
};