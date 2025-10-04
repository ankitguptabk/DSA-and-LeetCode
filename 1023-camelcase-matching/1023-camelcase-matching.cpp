class Solution {
public:
    vector<bool> camelMatch(vector<string>& q, string p) {
        vector<bool>ans;
        for(int i=0;i<q.size();i++){
            int z=0;
            bool inval=false;
            for(int j=0;j<q[i].size();j++){
                if(z<p.size() && q[i][j]==p[z]){
                    z++;
                }
                else if(isupper(q[i][j])){
                    inval=true;
                    break;
                }
            }
            if(!inval && z==p.size()) ans.push_back(true);
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};