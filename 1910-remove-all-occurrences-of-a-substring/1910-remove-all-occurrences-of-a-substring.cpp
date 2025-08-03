class Solution {
public:
    string removeOccurrences(string s, string p) {
        for(int i=0;i<s.size();i++){
            if(s.substr(i,p.size())==p){
                s.erase(s.begin()+i,s.begin()+i+p.size());
                i= -1;
            }
        }
        return s;
    }
};