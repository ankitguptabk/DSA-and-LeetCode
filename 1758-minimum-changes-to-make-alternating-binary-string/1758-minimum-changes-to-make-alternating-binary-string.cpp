class Solution {
public:
    int minOperations(string s) {
        int a=0,b=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]=='0') a++;
                else b++;
            }
            else{
                if(s[i]=='0') b++;
                else a++;
            }
        }
        int ans=min(a,b);
        return ans;
    }
};