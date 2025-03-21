class Solution {
public:
    int maxRepeating(string s, string w) {
       int ans = 0;
       string a=w;
       while(s.find(a)!=string::npos){
        ans++;
        a+=w;
       }
       return ans;
    }
};
