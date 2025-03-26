class Solution {
public:
    bool canConstruct(string r, string m) {
        sort(r.begin(),r.end());
        sort(m.begin(),m.end());
        unordered_map<char,int>a,b;
        for(auto c:r){
            a[c]++;
        }
        for(auto c:m){
            b[c]++;
        }
        for(auto const x:b){
            for(auto const y:a){
                if(x.first==y.first && x.second<y.second) return false;
                else if(b.find(y.first)==b.end()) return false;
            }
        }
        return true;
    }
};