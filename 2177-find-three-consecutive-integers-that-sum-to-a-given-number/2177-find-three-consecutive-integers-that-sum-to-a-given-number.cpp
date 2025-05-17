class Solution {
public:
    vector<long long> sumOfThree(long long n) {
        vector<long long> ans;
        long long a=n/3,b=n/3-1,c=a+1;
        if(a+b+c==n){
            ans.push_back(b);
            ans.push_back(a);
            ans.push_back(c);
        }
        return ans;
    }
};