class Solution {
public:
    string reverseWords(string s) {
        vector<string>a;
        string w="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                a.push_back(w);
                w="";
            }
            else{
                w+=s[i];
                if(i==s.size()-1) a.push_back(w);
            }
        }
        if(a.size()==1) return a[0];
        vector<char>v={'a','e','i','u','o'};
        string ans="";
        unordered_map<int,int>m;
        for(int i=0;i<a.size();i++){
            int c=0;
            for(int j=0;j<a[i].size();j++){
                if(find(v.begin(),v.end(),a[i][j])!=v.end()){
                    c++;
                }
            }
            m[i]=c;
        }
        int first=m[0];
        ans=a[0];
        ans+=" ";
        for(int i=1;i<a.size();i++){
            if(m[i]==first) reverse(a[i].begin(),a[i].end());
            if(i==a.size()-1){
                ans+=a[i];
            }
            else{
                ans+=a[i]+" ";
            }
        }
        return ans;
    }
};