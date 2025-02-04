class Solution {
public:
    string bestHand(vector<int>& r, vector<char>& s) {
        int a=0,b=0,c=0,d=0;
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(auto &x:m){
            if(x.second>=5){
                return "Flush";
            }
        }
        unordered_map<int,int>n;
        for(int i=0;i<r.size();i++){
            n[r[i]]++;
        }
        for(auto &x:n){
            if(x.second>=3){
                return "Three of a Kind";
            }
        }
        for(auto &x:n){
            if(x.second>=2){
                return "Pair";
            }
        }
        return "High Card";
    }
};