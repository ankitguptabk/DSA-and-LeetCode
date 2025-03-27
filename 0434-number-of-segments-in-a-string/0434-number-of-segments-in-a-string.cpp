class Solution {
public:
    int countSegments(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            string w="";
            while(i<s.size() && s[i]!=' '){
                w+=s[i];
                i++;
            }
            if(!w.empty()){
                ans++;
            }
        }
        return ans;
    }
};