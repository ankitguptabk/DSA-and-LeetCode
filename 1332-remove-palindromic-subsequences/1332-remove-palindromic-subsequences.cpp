class Solution {
public:
    bool palin(string x){
        for(int i=0;i<x.size()/2;i++){
            if(x[i]!=x[x.size()-1-i]) return false;
        }
        return true;        
    }
    int removePalindromeSub(string s) {
        if(s.size()==0) return 0;
        else if(palin(s)) return 1;
        else return 2;//subsequence-not contiguous, all a then all b
    }
};