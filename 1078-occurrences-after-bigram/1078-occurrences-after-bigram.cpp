class Solution {
public:
    vector<string> findOcurrences(string t, string f, string s) {
        vector<string>ans,a;
        string x="";
        for(int i=0;i<t.size();i++){
            if(t[i]==' '){
                a.push_back(x);
                x="";
            }
            else x+=t[i];
        }
        if(!x.empty()) a.push_back(x);
        for(int i=0;i<a.size()-2;i++){
            if(a[i]==f && a[i+1]==s){
                ans.push_back(a[i+2]);
            }
        }
        return ans;
    }
};