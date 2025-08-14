class Solution {
public:
    string simplifyPath(string p) {
        string x="",y="";
        vector<string>a;
        string ans="";
        for(int i=0;i<p.size();){
            y="";
            while(i<p.size() && p[i]!='/'){
                y+=p[i];
                i++;
            }
            if(!y.empty()){
                if(y==".."){
                    if(!x.empty()) x="";
                    else if(!a.empty()) a.pop_back();
                    y="";
                }
                else if(y=="."){
                    y="";
                }
                else{
                    if(!x.empty()) a.push_back(x);
                    x=y;
                    y="";
                }
            }
            if(i<p.size() && p[i]=='/') i++;
        }
        if(!x.empty()) a.push_back(x);
        for(int i=0;i<a.size();i++){
            ans+="/";
            ans+=a[i];
        }
        if(ans=="") ans="/";
        return ans;
    }
};