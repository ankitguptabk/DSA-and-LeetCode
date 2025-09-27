class Solution {
public:
    int distinctPoints(string s, int k) {
        string brivandeko = s;
        int n = s.size();
        vector<pair<int,int>> a;
        int c = 0, d = 0;
        a.push_back({0,0});
        for(int i=0; i<n; i++){
            if(s[i]=='L') c--;
            else if(s[i]=='R') c++;
            else if(s[i]=='D') d--;
            else if(s[i]=='U') d++;
            a.push_back({c,d});
        }
        vector<pair<int,int>> suf(n+1,{0,0});
        for(int i=n-1;i>=0;i--){
            suf[i] = suf[i+1];
            if(s[i]=='L') suf[i].first--;
            else if(s[i]=='R') suf[i].first++;
            else if(s[i]=='D') suf[i].second--;
            else if(s[i]=='U') suf[i].second++;
        }
        set<pair<int,int>> finals;
        for(int i=0; i+k<=n; i++){
            int j = i+k;
            int x = a[i].first + suf[j].first;
            int y = a[i].second + suf[j].second;
            finals.insert({x,y});
        }
        return (int)finals.size();
    }
};
