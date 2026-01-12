class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string x="";
        int a=0;
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]>0){
                a=max(a,int(x.size()));
                while(x[0]!=s[i]){
                    m[x[0]]--;
                    x.erase(0,1);
                }
                m[x[0]]--;
                x.erase(0,1);
            }
            m[s[i]]++;
            x+=s[i];
        }
        a=max(a,int (x.size()));
        return a;
    }
};