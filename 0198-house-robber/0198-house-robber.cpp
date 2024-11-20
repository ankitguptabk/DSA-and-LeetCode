class Solution {
public:
    int rob(vector<int>& n) {
        if(n.size()==0) return 0;
        if(n.size()==1) return n[0];
        int pre1=n[0];
        int pre2=max(n[0],n[1]);
        for(int i=2;i<n.size();i++){
            int c=max(pre2,pre1+n[i]);
            pre1=pre2;
            pre2=c;
        }
        return pre2;
    }
};