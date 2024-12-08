class Solution {
public:
    string largestNumber(vector<int>& n) {
        vector<string>s(n.size());
        for(int i=0;i<n.size();i++){
            s[i]=to_string(n[i]);
        }
        string ans="";
        sort(s.begin(),s.end(),[](string a,string b){
            return a+b>b+a;
        });
        if(s[0]=="0") return "0";
        for(int i=0;i<s.size();i++){
            ans+=s[i];
        }
        return ans;
    }
};