class Solution {
public:
    int minSwaps(string s) {
       if(s.empty()) return 0;
       int ans=0,balance=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='['){
            balance++;
        }
        else balance--;
        if(balance<0){
            ans++;
            balance=1;
        }
       } 
       return ans;
    }
};