class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string ans="";
        int a=0,b=0;
        for(char c:s){
            if(c==x) a++;
            else if(c==y){
                b++;
            }
        }
        while(b--){
            ans+=y;
        }
        for(char c:s){
            if(c!=x && c!=y){
                ans+=c;
            }
        }
        while(a--){
            ans+=x;
        }
        return ans;
    }
};