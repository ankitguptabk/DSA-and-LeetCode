class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {
        int ans=0;
        for(int i=0;i<f.size();i++){
            for(int j=0;j<b.size();j++){
                if(b[j]>=f[i]){
                    b.erase(b.begin() + j);
                    ans++;
                    break;
                }
            }
        }
        return f.size()-ans;
    }
};