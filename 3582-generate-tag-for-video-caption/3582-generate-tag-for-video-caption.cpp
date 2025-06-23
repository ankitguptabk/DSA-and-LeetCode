class Solution {
public:
    string generateTag(string c) {
        string ans="";
        ans+='#';
        while(c[0]==' '){
            c.erase(c.begin());
        }
        if(((c[0]>='A' && c[0]<='Z')||(c[0]>='a' && c[0]<='z') )) ans+=tolower(c[0]);
        for(int i=1;i<c.size();i++){
            if(i<c.size() && (c[i-1]==' '&& ((c[i]>='A' && c[i]<='Z')||(c[i]>='a' && c[i]<='z') ) )){
                ans+=toupper(c[i]);
            }
            else if(((c[i]>='A' && c[i]<='Z')||(c[i]>='a' && c[i]<='z') )) ans+=tolower(c[i]);
        }
        if(ans.size()>100){
            ans.erase(100,ans.size());
        }
        return ans;
    }
};