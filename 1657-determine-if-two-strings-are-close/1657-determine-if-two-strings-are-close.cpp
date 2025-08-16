class Solution {
public:
    bool closeStrings(string a, string b) {
        if(a.size()!=b.size()) return false;
        if(a==b) return true;
        unordered_map<char,int>m,n;
        for(auto c:a){
            m[c]++;
        }
        for(auto c:b){
            n[c]++;
        }
        vector<int>x,y;
        for(auto const &p:m){
            if(n.find(p.first)==n.end()) return false;
            x.push_back(p.second);
        }
        for(auto const &p:n){
            y.push_back(p.second);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        return x==y;
    }
};