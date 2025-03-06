class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c=-1;
        for(char x:s){
            if(x=='1') c++;
        }
        string res="";
        int m=s.size()-1;
        if(c==0){
            while(m--){
                res+="0";
            }
            res+="1";
            return res;
        }
        string ans = string(c, '1') + string(m - c, '0') + "1";
        return ans;
    }
};