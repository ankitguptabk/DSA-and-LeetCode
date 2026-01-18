class Solution {
public:
    int vowelConsonantScore(string s) {
        int v=0,co=0;
        for(char c:s){
            if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u'){
                v++;
            }
            else if(c==' ' || (c>='0' && c<='9')) continue;
            else {
                co++;
            }
        }
        if(co==0) return 0;
        return (v/co);
    }
};