class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& n) {
        int ans=0,streak=0;
        for(int i=0;i<n.size();i++){
            if(i+2<n.size() && ((n[i]-n[i+1])==(n[i+1]-n[i+2]))){
                streak++;
                ans+=streak;
            }
            else streak=0;
        }
        return ans;
    }
};