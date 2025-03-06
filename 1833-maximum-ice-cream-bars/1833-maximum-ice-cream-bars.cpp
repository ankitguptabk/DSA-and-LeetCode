class Solution {
public:
    int maxIceCream(vector<int>& c, int co) {
        int ans=0;
        sort(c.begin(),c.end());
        for(int i=0;i<c.size();i++){
            if(co<c[i]){
                break;
            }
            co-=c[i];
            ans++;
        }
        return ans;
    }
};