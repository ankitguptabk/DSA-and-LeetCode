class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        unordered_map<int,int>m;
        for(int i=0;i<e.size();i++){
            m[e[i][0]]++;
            m[e[i][1]]++;
            if(m[e[i][0]]>=e.size()) return e[i][0];
            else if(m[e[i][1]]>=e.size()) return e[i][1];
        }
        return e[0][1];
    }
};