class Solution {
public:
    int minimumDistance(vector<int>& n) {
        int sz = (int)n.size();
        unordered_map<int, array<int,3>> d;
        int ans = INT_MAX;

        for(int i=0;i<sz;i++){
            int v=n[i];
            array<int,3> &a = d[v];
            if(a[0]==0){
                a[0] = 1;
                a[1] = i;
            }
            else if(a[0]==1){
                a[0] = 2;
                a[2] = i;
            }
            else{
                int dist = 2*(i - a[1]);
                if(dist < ans) ans = dist;
                a[1] = a[2];
                a[2] = i;
            }
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};