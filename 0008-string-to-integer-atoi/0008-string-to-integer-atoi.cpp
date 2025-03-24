class Solution {
public:
    int myAtoi(string s) {
        int ans=0;
        int sign=1;
        int j=0;
        while(j<s.size() && s[j]==' ') j++;
        if(j<s.size() && (s[j]=='-'|| s[j]=='+')){
            if(s[j]=='-') sign=-1;
            else if(s[j]=='+') sign=1;
            j++;
        }
        for(int i=j;i<s.size();i++){
            if(s[i]<'0' || s[i]>'9') break;
            int d=s[i]-'0';
            if(ans>(INT_MAX-d)/10){
                if(sign==1) return INT_MAX;
                return INT_MIN;
            }
            ans=ans*10+d;
        }
        return ans*sign;
    }
};