class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int a) {
        int ans=0;
        vector<long long>x;
        long long y=(long long)a;
        for(int i=0;i<c.size();i++){
            x.push_back((long long)c[i]-(long long)r[i]);
        }
        sort(x.begin(),x.end());
        for(int i=0;i<x.size();i++){
            if(y<=0) break;
            else{
                y-=x[i];
                if(y>=0) ans++;
            }
        }
        return ans;
    }
};