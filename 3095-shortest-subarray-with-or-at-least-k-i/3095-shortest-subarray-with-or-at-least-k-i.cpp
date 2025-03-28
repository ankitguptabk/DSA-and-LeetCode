class Solution {
public:
    int minimumSubarrayLength(vector<int>& n, int k) {
        int minl=INT_MAX;
        for(int i=0;i<n.size();i++){
            int curror=0;
            for(int j=i;j<n.size();j++){
                curror|=n[j];
                if(curror>=k){
                    minl=min(minl,j-i+1);
                    break;
                }
            }
        }
        if(minl==INT_MAX) return -1;
        return minl;
    }
};