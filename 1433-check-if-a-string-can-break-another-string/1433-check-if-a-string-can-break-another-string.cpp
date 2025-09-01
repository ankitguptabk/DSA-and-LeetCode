class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool can1=true, can2=true;
        for(int i=0;i<s1.size();i++){
            if(s1[i]<s2[i]) can1=false;
            if(s1[i]>s2[i]) can2=false;
        }
        if(can1 || can2) return true;
        return false;
    }
};