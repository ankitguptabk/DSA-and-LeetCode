class Solution {
public:
    bool rotateString(string s, string g) {
        if(s.size()!=g.size()) return false;
        int c=0;
        while(c<s.size()){
            if(s==g) return true;
            else{
                char temp=s[0];
                for(int i=0;i<s.size()-1;i++){
                    s[i]=s[i+1];
                }
                s[s.size()-1]=temp;
            }
            c++;
        }
        return false;
    }
};