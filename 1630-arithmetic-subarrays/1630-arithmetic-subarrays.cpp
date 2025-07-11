class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& n, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            vector<int>a(n.begin()+l[i],n.begin()+r[i]+1);
            sort(a.begin(),a.end());
            bool arith=true;
            for(int i=2;i<a.size();i++){
                int x=a[1]-a[0];
                if(a[i]-a[i-1]!=x){
                    arith=false;
                    break;
                }
            }
            ans.push_back(arith);
        }
        return ans;
    }
};