class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()!=2){
            string x="";
            for(int i=0;i<s.size()-1;i++){
                x+=to_string((s[i]-'0'+s[i+1]-'0')%10);
            }
            s=x;
        }
        if(s[0]==s[1]) return true;
        return false;
    }
};