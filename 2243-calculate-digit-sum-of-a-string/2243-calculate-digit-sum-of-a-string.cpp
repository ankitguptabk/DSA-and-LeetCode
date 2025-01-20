class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string a="";
            for(int i=0;i<s.size();i+=k){
                int n=0;
                for(int j=i;j<i+k && j<s.size();j++){
                    n+=(s[j]-'0');
                }
                a+=to_string(n);
            }
            s=a;
        }
        return s;
    }
};