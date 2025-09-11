class Solution {
public:
    int minOperations(string s) {
        char c='z';
        bool change=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') continue;
            else{
                c=min(c,s[i]);
                change =true;
            }
        }
        if(c=='z' && !change) return 0;
        int x=(26-(c-'a'))%26;
        return x;
    }
};
