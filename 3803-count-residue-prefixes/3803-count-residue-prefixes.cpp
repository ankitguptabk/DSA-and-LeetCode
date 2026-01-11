class Solution {
public:
    int residuePrefixes(string s) {
        int ans=0;
        int n=s.size();
        unordered_set<char>a;
        for(int i=0;i<n;i++){
            a.insert(s[i]);
            if((i+1)%3==a.size()) ans++;
        }
        return ans;
    }
};