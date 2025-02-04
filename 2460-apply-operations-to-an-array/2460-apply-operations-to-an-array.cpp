class Solution {
public:
    vector<int> applyOperations(vector<int>& n) {
        for(int i=0;i<n.size()-1;i++){
            if(n[i]==n[i+1]){
                n[i]*=2;
                n[i+1]=0;
                i++;
            }
        }
        int c=0;
        vector<int>num;
        for(int i=0;i<n.size();i++){
            if(n[i]!=0){
                num.push_back(n[i]);
            }
            else if(n[i]==0) c++;
        }
        while(c--){
            num.push_back(0);
        }
        return num;
    }
};