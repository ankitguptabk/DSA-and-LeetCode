class Solution {
public:
    bool prime(int num){
        if(num<=1) return false;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            int num=n[i][i];
            int numb=n[i][n.size()-i-1];
            if(prime(num)==true){
                ans=max(ans,num);
            }
            if(prime(numb)==true){
                ans=max(ans,numb);
            }
        }
        return ans;
    }
};