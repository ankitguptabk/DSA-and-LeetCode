class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string s=bitset<32>(n).to_string();
        s=s.substr(s.find('1'));
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1' ){
                s[i]='0';
            }
            else if(s[i]=='0'){
                s[i]='1';
            }
        }
        for(int i=0;i<s.size();i++){
            ans+=(s[i]-'0')*pow(2,s.size()-1-i);
        }
        return ans;
    }
};