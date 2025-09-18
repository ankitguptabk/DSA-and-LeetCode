class Solution {
public:
    bool yeah(string x,string y){
        if(y.size()<x.size()) return false;
        if((y.substr(0,x.size())==x) && (y.substr(y.size()-x.size())==x)){
            return true;
        }
        return false;
    }
    int countPrefixSuffixPairs(vector<string>& w) {
        int ans=0;
        for(int i=0;i<w.size();i++){
            for(int j=i+1;j<w.size();j++){
                if(yeah(w[i],w[j])){
                    ans++;
                }
            }
        }
        return ans;
    }
};