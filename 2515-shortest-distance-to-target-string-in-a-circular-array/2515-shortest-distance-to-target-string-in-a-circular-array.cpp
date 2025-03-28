class Solution {
public:
    int closestTarget(vector<string>& w, string t, int s) {
        int ans=INT_MAX;
        for(int i=0;i<w.size();i++){
            if(w[i]==t){
                ans=min(ans,min(abs(s-i),(int)(w.size()-abs(s-i))));
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};