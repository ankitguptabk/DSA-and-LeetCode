class Solution {
public:
    string findDifferentBinaryString(vector<string>& n) {
        string ans="";
        for(int i=0;i<n.size();i++){
            if(n[i][i]=='0'){
                ans+='1';
            }
            else ans+='0';
        }
        return ans;
    }
};