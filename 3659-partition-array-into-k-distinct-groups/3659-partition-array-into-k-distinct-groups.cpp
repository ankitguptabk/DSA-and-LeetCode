class Solution {
public:
    bool partitionArray(vector<int>& n, int k) {
        unordered_map<int,int>m;
        if((int)n.size()%k!=0) return false;
        int y=(int)n.size()/k;
        for(int x:n){
            m[x]++;
            if(m[x]>y) return false;
        }
        return true;
    }
};