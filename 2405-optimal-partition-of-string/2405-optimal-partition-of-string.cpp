class Solution {
public:
    int partitionString(string s) {
        vector<string>x;
        string y="";
        for(int i=0;i<s.size();i++){
            if(y.find(s[i])!=string::npos){
                x.push_back(y);
                y="";
            }
            y+=s[i];
        }
        if(!y.empty()) x.push_back(y);
        return x.size();
    }
};