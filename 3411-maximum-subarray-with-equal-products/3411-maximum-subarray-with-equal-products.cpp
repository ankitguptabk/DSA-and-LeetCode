class Solution {
public:
    int maxLength(vector<int>& n) {
        int ans=0;
        long long p=1;
        long long g=0,l=1;
        for(int i=0;i<n.size();i++){
            p=1,g=0,l=1;
            for(int j=i;j<n.size();j++){
                p*=n[j];
                g=__gcd(g,static_cast<long long>(n[j]));
                l=(l*n[j])/__gcd(l,static_cast<long long>(n[j]));
                if(p==l*g){
                    ans=max(ans,j-i+1);
                }
                if(p>1e9 || l>1e9){
                    break;
                }
            }
        }
        return ans;
    }
};