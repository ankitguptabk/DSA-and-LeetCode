class Solution {
public:
    int isPrefixOfWord(string sen, string s) {
        vector<string>a;
        string w="";
        for(int i=0;i<sen.size();i++){
            if(sen[i]==' ' || i==sen.size()-1){
                if(i==sen.size()-1 && sen[i]!=' ') w+=sen[i];
                a.push_back(w);
                w="";
            }
            else w+=sen[i];
        }
        for(int i=0;i<a.size();i++){
            if(a[i].size()<s.size()) continue;
            else if(a[i].substr(0, s.size())==s){
                return i+1;
            }
        }
        return -1;
    }
};