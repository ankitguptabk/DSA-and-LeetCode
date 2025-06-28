class Solution {
public:
    bool checkZeroOnes(string s) {
        int o=0,z=0,a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                b++;
                o=max(o,a);
                a=0;
            }
            else if(s[i]=='1'){
                a++;
                z=max(z,b);
                b=0;
            }
        }
        o=max(o,a);
        z=max(z,b);
        return o>z;
    }
};