class Solution {
public:
    string toGoatLatin(string s) {
        vector<string>a;
        string w="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                a.push_back(w);
                w="";
            }
            else w+=s[i];
        }
        a.push_back(w);
        vector<char>v={'a','e','i','o','u','A','E','I','O','U'};
        string ans="";
        for(int i=0;i<a.size();i++){
            if(find(v.begin(),v.end(),a[i][0])==v.end()){
                a[i]+=a[i][0];
                a[i].erase(a[i].begin());
            }
            a[i]+="ma";
            for(int j=0;j<=i;j++){
                a[i]+="a";
            }
        }
        for(int i=0;i<a.size()-1;i++){
            ans+=a[i];
            ans+=" ";
        }
        ans+=a[a.size()-1];
        return ans;
    }
};