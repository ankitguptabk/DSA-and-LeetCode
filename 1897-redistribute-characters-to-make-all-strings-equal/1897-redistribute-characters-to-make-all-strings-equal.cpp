class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>m;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                m[words[i][j]]++;
            }
        }
        int c=words.size();
        for(auto &pair:m){
            if(pair.second%c!=0) return false;
        }
        return true;
    }
};