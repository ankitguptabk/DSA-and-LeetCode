class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int a=0;
        for(int i = 0; i < n.size(); i++) {
            if(n[i]!=0){
                n[a++]=n[i];
            }
        }
        for(int i=a;i<n.size();i++){
            n[i]=0;
        }
    }
};
