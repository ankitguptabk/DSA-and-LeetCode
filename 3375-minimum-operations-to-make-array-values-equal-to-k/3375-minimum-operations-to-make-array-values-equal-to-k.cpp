class Solution {
public:
    int minOperations(vector<int>& num, int k) {
        unordered_set<int>n(num.begin(),num.end());
        vector<int>a(n.begin(),n.end());
        int ans=(int)a.size();
        bool x=false,y=false;
        for(int i=0;i<a.size();i++){
            if(a[i]<k){
                x=true;
            }
            else if(a[i]==k){
                y=true;
            }
        }
        if(x) return -1;
        else if(y) return ans-1;
        return ans;
    }
};