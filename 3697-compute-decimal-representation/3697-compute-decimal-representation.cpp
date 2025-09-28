class Solution {
public:
    vector<int> decimalRepresentation(int num) {
        vector<int>ans;
        long long n=(long long)num;
        long long p=10;
        while(n>0){
            long long x=n%p;
            n-=x;
            if(x!=0) ans.push_back(x);
            p*=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};