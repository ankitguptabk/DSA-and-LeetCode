class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<long long>fib;
        fib.push_back(1);
        fib.push_back(1);
        for(int i=2;  ;i++){
            long long next=fib[i-1]+fib[i-2];
            fib.push_back(next);
            if(next>=k) break;
        }
        int ans=0, i=fib.size()-1;
        while(k>0){
            if(fib[i]<=k){
                k-=fib[i];
                ans++;
            }
            else{
                i--;
            }
        }
        return ans;
    }
};