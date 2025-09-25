class Solution {
public:
    long long zeroFilledSubarray(vector<int>& n) {
        long long ans=0;
        vector<int>b;
        long long c=0;
        for(int i=0;i<n.size();i++){
            if(n[i]==0){
                b.push_back(n[i]);
            }
            else if(n[i]!=0){
                c=b.size();
                ans+=(c*(c+1))/2;
                b={};
            }
        }
        if(!b.empty()){
            c=b.size();
            ans+=(c*(c+1))/2;
        }
        return ans;
    }
};