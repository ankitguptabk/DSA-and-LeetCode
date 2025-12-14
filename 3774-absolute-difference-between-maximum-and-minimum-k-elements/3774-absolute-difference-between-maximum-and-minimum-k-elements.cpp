class Solution {
public:
    int absDifference(vector<int>& n, int k) {
        int a=0,b=0;
        sort(n.begin(),n.end());
        for(int i=0;i<k;i++){
            a+=n[i];
            b+=n[n.size()-1-i];
        }
        return b-a;
    }
};