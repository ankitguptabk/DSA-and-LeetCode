class Solution {
public:
    bool prime(int x){
        if(x<2) return false;
        for(int j=2;j*j<=x;j++){
            if(x%j==0) return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans;
        if(left<=2 && right>=2){
            ans.push_back(2);
        }
        if(left%2==0) left++;
        int mini=INT_MAX;
        for(int i=left;i<right+1;i+=2){
            if(prime(i)){
                ans.push_back(i);
            }
        }
        if(ans.size()<2) return {-1,-1};
        for(int i=0;i<ans.size()-1;i++){
            mini=min(mini,(ans[i+1]-ans[i]));
        }
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i+1]-ans[i]==mini){
                return {ans[i],ans[i+1]};
            }
        }
        return {-1,-1};
    }
};