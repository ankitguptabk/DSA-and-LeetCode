class Solution {
public:
    string complexNumberMultiply(string n, string m) {
        string ans="";
        string x,y,z,w;
        int a=0,b=0,c=0,d=0;
        int j,k;
        for(int i=0;i<n.size();i++){
            if(n[i]=='+'){
                j=i;
                break;
            }
            else{
                x+=n[i];
            }
        }
        for(int l=j+1;l<n.size();l++){
            if(n[l]=='i'){
                break;
            }
            else{
                y+=n[l];
            }
        }
        a=stoi(x),b=stoi(y);
        for(int i=0;i<m.size();i++){
            if(m[i]=='+'){
                k=i;
                break;
            }
            else{
                z+=m[i];
            }
        }
        for(int l=k+1;l<m.size();l++){
            if(m[l]=='i'){
                break;
            }
            else{
                w+=m[l];
            }
        }
        c=stoi(z),d=stoi(w);
        string p=to_string(a*c-b*d);
        string q=to_string(a*d+b*c);
        ans=p+"+"+q+"i";
        return ans;
    }
};