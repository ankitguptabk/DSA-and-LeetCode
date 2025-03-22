class Solution {
public:
    int pivotIndex(vector<int>& n){
        int ls=0,rs=0;
        for(auto x:n){
            rs+=x;
        }
        for(int i=0;i<n.size();i++){
            rs-=n[i];
            if(ls==rs) return i;
            ls+=n[i];
        }
        return -1;
    }
};