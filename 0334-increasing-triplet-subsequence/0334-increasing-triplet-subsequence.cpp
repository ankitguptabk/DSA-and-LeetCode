class Solution {
public:
    bool increasingTriplet(vector<int>& n) {
        int a=INT_MAX,b=INT_MAX,c=INT_MAX;
        for(int i=0;i<n.size();i++){
            if(a>=n[i]) a=n[i];
            else if(b>=n[i]) b=n[i];
            else if(c>=n[i]) return true;
        }
        return false;
    }
};