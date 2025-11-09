class Solution {
public:
    int minimumDistance(vector<int>& n) {
        int sz=(int)n.size(), ans=INT_MAX;

        vector<pair<int,int>> v(sz);
        for(int i=0; i<sz; i++) v[i]={n[i],i};
        sort(v.begin(),v.end());

        for(int i=0;i<sz-2;i++){
            int a=v[i].first,b=v[i+1].first,c=v[i+2].first;
            int x=v[i].second,y=v[i+1].second,z=v[i+2].second;
            if(a==b && b==c){
                int d=abs(x-y)+abs(y-z)+abs(x-z);
                if(d<ans) ans=d;
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};