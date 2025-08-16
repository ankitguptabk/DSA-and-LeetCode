class Solution {
public:
    int maxOperations(vector<int>& n, int k) {
        int ans=0;
        sort(n.begin(),n.end());
        int l=0,r=n.size()-1;
        while(l<r){
            if(n[l]+n[r]==k){
                ans++;
                l++;
                r--;
            }
            else if(n[l]+n[r]>k){
                r--;
            }
            else if(n[l]+n[r]<k){
                l++;
            }
        }
        return ans;
    }
};