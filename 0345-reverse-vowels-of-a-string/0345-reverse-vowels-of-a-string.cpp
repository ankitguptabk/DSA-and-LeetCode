class Solution {
public:
    string reverseVowels(string s) {
        vector<int>v;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if((c=='a' || c=='A' || c=='e'|| c=='E'|| c=='i'|| c=='I'|| c=='o'||c=='O'||c=='u'||c=='U')){
                v.push_back(i);
            }
        }
        for(int i=0;i<v.size()/2;i++){
            swap(s[v[i]],s[v[v.size()-1-i]]);
        }
        return s;
    }
};