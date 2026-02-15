class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        int n=words.size();
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<words[i].size();j++){
                c+= weights[words[i][j]-'a'];
            }
            c%=26;
            ans+=('z'-c);
        }
        return ans;
    }
};