class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<char,int>x;
        string a=to_string(n);
        int mini=INT_MAX;
        for(char c:a){
            x[c]++;
        }
        for(auto const &p:x){
            mini=min(mini,p.second);
        }
        int ans=0;
        for(auto const &p:x){
            if(p.second==mini){
                ans=p.first-'0';
                break;
            }
        }
        return ans;
    }
};