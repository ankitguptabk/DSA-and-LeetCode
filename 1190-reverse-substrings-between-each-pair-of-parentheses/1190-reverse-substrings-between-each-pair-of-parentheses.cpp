class Solution {
public:
    string reverseParentheses(string s) {
        while(true){
            int c=-1,d=-1;
            for(int i=0;i<s.size();i++){
                if(s[i]=='('){
                    c=i;
                }
                if(s[i]==')'){
                    d=i;
                    break;
                }
            }
            if(c==-1 || d==-1){
                break;
            }
            reverse(s.begin()+c+1,s.begin()+d);
            s.erase(s.begin()+d);
            s.erase(s.begin()+c);
        }
        return s;
    }
};
