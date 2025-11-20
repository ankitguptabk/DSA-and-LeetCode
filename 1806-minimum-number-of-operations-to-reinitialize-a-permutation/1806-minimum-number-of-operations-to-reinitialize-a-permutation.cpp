class Solution {
public:
    int reinitializePermutation(int n) {
        vector<int>perm;
        for(int i=0;i<n;i++){
            perm.push_back(i);
        }
        vector<int>org=perm;
        vector<int>a(n,0);
        int ans=0;
        while(true){
            for(int i=0;i<n;i++){
                if(i%2==0){
                    a[i]=perm[i/2];
                }
                else{
                    a[i]=perm[n / 2 + (i - 1) / 2];
                }
            }
            ans++;
            perm=a;
            if(perm==org) break;
        }
        return ans;
    }
};