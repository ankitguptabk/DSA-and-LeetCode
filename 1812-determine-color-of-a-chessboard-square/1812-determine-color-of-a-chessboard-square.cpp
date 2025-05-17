class Solution {
public:
    bool squareIsWhite(string c) {
        int a=c[0]-'a';
        int b=c[1]-'0';
        if(a%2==0 && b%2) return false;
        else if(a%2 && b%2==0) return false;
        return true;
    }
};