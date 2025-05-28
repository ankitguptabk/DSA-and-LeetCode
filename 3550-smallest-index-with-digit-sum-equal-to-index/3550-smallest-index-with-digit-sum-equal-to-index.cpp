class Solution {
public:
    int smallestIndex(vector<int>& n) {
        for(int i=0;i<n.size();i++){
            int c=0;
            while(n[i]>0){
                c+=n[i]%10;
                n[i]/=10;
            }
            if(c==i) return i;
        }
        return -1;
    }
};