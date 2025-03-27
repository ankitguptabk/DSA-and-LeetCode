class Solution {
public:
    string reverseOnlyLetters(string s) {
        vector<int>a;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z')|| (s[i]>='A'&& s[i]<='Z')){
                a.push_back(i);
            }
        }
        for(int i=0;i<a.size()/2;i++){
            swap(s[a[i]],s[a[a.size()-1-i]]);
        }
        return s;
    }
};