class Solution {
public:
    int minOperations(vector<int>& n, int k) {
        int s=0;
        for(int i=0;i<n.size();i++){
            s+=n[i];
        }
        return s%k;
    }
};