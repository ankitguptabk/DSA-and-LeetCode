class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int n=c.size();
        vector<bool> result(n);
        int maxcandy=*max_element(c.begin(),c.end());
        for(int i=0;i<n;i++){
            result[i]=(c[i]+e>=maxcandy);
        }
        return result;
    }
};