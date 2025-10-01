class Solution {
public:
    int maximumUniqueSubarray(vector<int>& n) {
        int ans=0;
        unordered_set<int>x;
        int s=0;
        int l=0;
        for(int i=0;i<n.size();i++){
            int y=n[i];
            while(x.find(y)!=x.end()){
                s-=n[l];
                x.erase(n[l]);
                l++;
            }
            s+=y;
            ans=max(ans,s);
            x.insert(y);
        }
        return ans;
    }
};