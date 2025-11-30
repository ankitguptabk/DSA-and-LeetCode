class Solution {
public:
    int revnum(int n){
        int r=0;
        while(n>0){
            r=r*10+n%10;
            n/=10;
        }
        return r;
    }
    int minMirrorPairDistance(vector<int>& n) {
        int ans=INT_MAX;
        unordered_map<int,int>last;
        for(int i=n.size()-1;i>=0;i--){
            int r=revnum(n[i]);
            if(last.count(r)){
                ans=min(ans,last[r]-i);
            }
            last[n[i]]=i;
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};