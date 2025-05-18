class Solution {
public:
    string sortVowels(string s) {
        string a="AEIOUaeiou";
        vector<char>c;
        for(char ch:s){
            if(a.find(ch)!=string::npos){
                c.push_back(ch);
            }
        }
        sort(c.begin(),c.end());
        int b=0;
        for(char &ch:s){
            if(a.find(ch)!=string::npos){
                ch=c[b];
                b++;
            }
        }
        return s;
    }
};