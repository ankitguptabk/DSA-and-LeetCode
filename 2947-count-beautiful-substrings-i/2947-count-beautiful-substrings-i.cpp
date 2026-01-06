class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int x=0,y=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='a'|| s[j]=='e'|| s[j]=='i'|| s[j]=='o'|| s[j]=='u'){
                    x++;
                }
                else y++;
                if(x==y && ((x*y)%k==0)) ans++;
            }
        }
        return ans;
    }
};