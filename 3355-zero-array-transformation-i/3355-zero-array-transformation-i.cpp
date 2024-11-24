class Solution {
public:
    bool isZeroArray(vector<int>& n, vector<vector<int>>& q) {
        int s=n.size();
        vector<int>d(s+1,0);
        for(auto it:q){
            d[it[0]]++;
            d[it[1]+1]--;
        }
        vector<int>p(s);
        for(int i=0;i<s;i++){
            if(i==0)p[0]=d[0];
            else p[i]=p[i-1]+d[i];
            if(p[i]<n[i])return false;
        }
        return true;
    }
};
