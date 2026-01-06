class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int ans=0;
        set<char>v={'a','e','i','o','u'};
        for(int i=0;i<s.size();i++){
            int x=0,y=0;
            for(int j=i;j<s.size();j++){
                if(v.find(s[j])!=v.end()){
                    x++;
                }
                else y++;
                if(x==y && ((x*y)%k==0)) ans++;
            }
        }
        return ans;
    }
};