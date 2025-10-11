class Solution {
public:
    bool scoreBalance(string s) {
        int a=0,b=0;
        for(int i=0;i<s.size()-1;i++){
            a+=(s[i]-'a'+1);
            b=0;
            for(int j=i+1;j<s.size();j++){
                b+=(s[j]-'a'+1);
            }
            if(a==b) return true;
        }
        if(a==b) return true;
        return false;
    }
};