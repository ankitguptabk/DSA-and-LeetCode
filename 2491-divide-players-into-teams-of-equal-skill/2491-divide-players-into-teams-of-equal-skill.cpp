class Solution {
public:
    long long dividePlayers(vector<int>& s) {
        long long ans=0;
        sort(s.begin(),s.end());
        int x=s[0]+s[s.size()-1];
        for(int i=0;i<s.size()/2;i++){
            if(s[i]+s[s.size()-1-i]!=x) return -1;
            ans+=s[i]*s[s.size()-1-i];
        }
        return ans;
    }
};