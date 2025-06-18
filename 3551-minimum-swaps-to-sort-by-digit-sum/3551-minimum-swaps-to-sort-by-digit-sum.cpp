class Solution {
public:
    int digs(int x){
        int ds=0;
        while(x>0){
            ds+=x%10;
            x/=10;
        }
        return ds;
    }
    int minSwaps(vector<int>& n) {
        unordered_map<int,int>m;
        for(int i=0;i<n.size();i++){
            m[n[i]]=digs(n[i]);
        }
        vector<int> sorted = n;
        sort(sorted.begin(), sorted.end(), [&](int a, int b) {
            if(m[a] == m[b]) return a < b;
            return m[a] < m[b];
        });
        unordered_map<int,int> pos;
        for(int i=0;i<n.size();i++){
            pos[n[i]] = i;
        }
        int swaps = 0;
        for(int i=0;i<n.size();i++){
            if(n[i]!=sorted[i]){
                swaps++;
                int idx = pos[sorted[i]];
                pos[n[i]]=idx;
                pos[sorted[i]]=i;
                swap(n[i], n[idx]);
            }
        }
        return swaps;
    }
};
