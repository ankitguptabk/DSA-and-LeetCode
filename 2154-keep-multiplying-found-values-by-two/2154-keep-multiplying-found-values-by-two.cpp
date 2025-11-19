class Solution {
public:
    int findFinalValue(vector<int>& n, int o) {
        for(int i=0;i<n.size();     ){
            if(n[i]==o){
                o=2*o;
                i=0;
            }
            else{
                i++;
            }
        }
        return o;
    }
};