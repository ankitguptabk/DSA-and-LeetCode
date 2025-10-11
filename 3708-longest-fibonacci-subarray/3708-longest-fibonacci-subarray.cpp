class Solution {
public:
    int longestSubarray(vector<int>& n) {
        int ans=2,a=2;
        if(n.size()<=2) return n.size();
        for(int i=2;i<n.size();i++){
            if(n[i]==n[i-1]+n[i-2]){
                a++;
            }
            else{
                ans=max(ans,a);
                a=2;
            }
        }
        ans=max(ans,a);
        return ans;
    }
};