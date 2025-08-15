class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>x={'a', 'e', 'i', 'o', 'u'};
        int ans=INT_MIN,c=0;
        for(int i=0;i<k;i++){
            if(x.count(s[i])) c++;
        }
        ans=c;
        for(int j=k;j<s.size();j++){
            if(x.count(s[j])) c++;
            if(x.count(s[j-k])) c--;
            ans=max(ans,c);
        }
        return ans;
    }
};