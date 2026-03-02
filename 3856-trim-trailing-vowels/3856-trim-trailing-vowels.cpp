class Solution {
public:
    string trimTrailingVowels(string s) {
        int x=-1;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                continue;
            }
            else{
                x=i;
                break;
            }
        }
        string ans= s.substr(0, x+1);
        return ans;
    }
};