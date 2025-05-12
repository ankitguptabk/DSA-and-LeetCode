class Solution {
public:
    int maxFreqSum(string s) {
        string a="aeiou";
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        int v=0;
        int c=0;
        for(auto const p:m){
            if(find(a.begin(),a.end(),p.first)==a.end()){
                c=max(c,p.second);
            }
            else{
                v=max(v,p.second);
            }
        }
        return v+c;
        }
};