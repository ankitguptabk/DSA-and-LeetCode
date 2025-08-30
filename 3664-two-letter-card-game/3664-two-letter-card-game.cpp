class Solution {
public:
    int score(vector<string>& a, char x) {
        int s0=0,s1=0,o=0;
        unordered_map<char,int> c0,c1;
        for(auto &s:a){
            if(s[0]==x && s[1]==x) o++;
            else if(s[0]==x){
                c0[s[1]]++;
                s0++;
            }
            else if(s[1]==x){
                c1[s[0]]++;
                s1++;
            }
        }
        int m0=0,m1=0;
        for(auto &p:c0) m0=max(m0,p.second);
        for(auto &p:c1) m1=max(m1,p.second);
        int ans=0;
        for(int t=0;t<=o;t++){
            int S0=s0+t,S1=s1+(o-t);
            int f0=max(m0,t),f1=max(m1,o-t);
            
            int p0=min(S0/2,S0-f0),p1=min(S1/2,S1-f1);
            ans=max(ans,p0+p1);
        }
        return ans;
    }
};
