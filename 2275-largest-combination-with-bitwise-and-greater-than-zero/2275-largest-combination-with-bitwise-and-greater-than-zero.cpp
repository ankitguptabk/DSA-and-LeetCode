class Solution {
public:
    int largestCombination(vector<int>& c) {
        int ans=1;
        for(int i=1;i<=10000000; ){
            int a=0;
            for(int x:c){
                if((x&i) >0) a++;
            }
            ans=max(ans,a);
            i=i<<1;
        }
        return ans;
    }
};