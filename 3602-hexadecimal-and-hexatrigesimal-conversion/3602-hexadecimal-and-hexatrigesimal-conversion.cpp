class Solution {
public:
    string concatHex36(int n) {
        string ans="";
        string hex="",hextri="";
        int sq=n*n;
        int cube=sq*n;
        unordered_map<int,char>m;
        for(int i=10;i<=35;i++){
            m[i]='A'+i-10;
        }
        while(sq>0){
            int r=sq%16;
            if(r>9){
                hex+=m[r];
            }
            else hex+=to_string(r);
            sq/=16;
        }
        reverse(hex.begin(),hex.end());
        while(cube>0){
            int r=cube%36;
            if(r>9){
                hextri+=(m[r]);
            }
            else hextri+=to_string(r);
            cube/=36;
        }
        reverse(hextri.begin(),hextri.end());
        ans=hex+hextri;
        return ans;
    }
};