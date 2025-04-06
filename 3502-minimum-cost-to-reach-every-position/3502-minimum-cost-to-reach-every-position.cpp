class Solution {
public:
    vector<int> minCosts(vector<int>& c) {
        for(int i=1;i<c.size();i++){
            if(c[i]>c[i-1]) c[i]=c[i-1];
        }
        return c;
    }
};