class Solution {
public:
    string stringHash(string s, int k) {
        string res="";
        int x=0,c=0;
        for(int i=0;i<s.size();i++){
            x+=s[i]-'a';
            c++;
            if(c==k){
                res+=x%26 +'a';
                c=0;
                x=0;
            }
        }
        return res;
    }
};