class Solution {
public:
    char findKthBit(int n, int k) {
        string s="0";
        int x=1;
        while(x<n){
            string a="";
            a+=s;
            a+="1";
            for(int i=0;i<s.size();i++){
                s[i]^=1;
            }
            reverse(s.begin(),s.end());
            a+=s;
            s=a;
            x++;
        }
        return s[k-1];
    }
};