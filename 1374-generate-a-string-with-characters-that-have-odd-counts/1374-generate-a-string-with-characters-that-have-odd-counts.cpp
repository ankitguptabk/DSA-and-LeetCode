class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        if(n%2==1){
            while(n--){
                ans+="a";
            }
        }
        else{
            while(n>1){
                ans+="a";
                n--;
            }
            ans+="b";
        }
        return ans;
    }
};