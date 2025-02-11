class Solution {
public:
    int countPartitions(vector<int>& n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            int l=0,r=0;
            for(int j=0;j<=i;j++){
                l+=n[j];
            }
            for(int j=i+1;j<n.size();j++){
                r+=n[j];
            }
            if((l-r)%2==0 && (r!=0 && l!=0)) ans++;
        }
        return ans;
    }
};