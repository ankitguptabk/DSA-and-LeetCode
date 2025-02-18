class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<string>a;
        string x="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&& s[i]<='9'){
                x+=s[i];
            }
            else{
                if(x.empty()==false){
                    a.push_back(x);
                    x="";
                }
            }
        }
        if(x.empty()==false){
            a.push_back(x);
        }
        vector<int>c;
        for(int i=0;i<a.size();i++){
            c.push_back(stoi(a[i]));
        }
        for(int i=0;i<c.size()-1;i++){
            if(c[i]>=c[i+1]) return false;
        }
        return true;
    }
};