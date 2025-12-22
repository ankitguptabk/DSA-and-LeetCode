class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        string s=s1;
        sort(s.begin(),s.end());
        string x="";
        for(int i=0;i<s2.size();i++){
            x+=s2[i];
            if(x.size()==s.size()){
                string temp=x;
                sort(temp.begin(),temp.end());
                if(temp==s) return true;
                x.erase(x.begin());
            }
        }
        return false;
    }
};