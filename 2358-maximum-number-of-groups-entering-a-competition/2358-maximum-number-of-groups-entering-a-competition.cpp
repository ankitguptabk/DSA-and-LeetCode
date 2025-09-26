class Solution {
public:
    int maximumGroups(vector<int>& g) {
        int c=1;
        int n=g.size();
        while(n>=0){
            n-=c;
            c++;
        }
        return c-2;
    }
};