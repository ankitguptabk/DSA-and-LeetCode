class Solution {
public:
    int appendCharacters(string s, string t) {
        int ans=0,idx=0;
        for(int i=0;i<t.size();i++){
            bool f=false;
            for(int j=idx;j<s.size();j++){
                if(t[i]==s[j]){
                    idx=j+1;
                    f=true;
                    break;
                }
            }
            if(!f){
                ans=t.size()-i;
                return ans;
            }
        }
        return ans;
    }
};