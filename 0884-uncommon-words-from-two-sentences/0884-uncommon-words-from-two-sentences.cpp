class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>a,b,ans;
        unordered_map<string,int>m;
        string x="";
        for(int i=0;i<s1.size();i++){
            x+=s1[i];
            if(s1[i]==' ' || i==s1.size()-1){
                if(s1[i]==' '){
                    x.pop_back();
                }
                a.push_back(x);
                x="";
            }
        }
        x="";
        for(int i=0;i<s2.size();i++){
            x+=s2[i];
            if(s2[i]==' ' || i==s2.size()-1){
                if(s2[i]==' '){
                    x.pop_back();
                }
                b.push_back(x);
                x="";
            }
        }
        for(auto s:a){
            m[s]++;
        }
        for(auto s:b){
            m[s]++;
        }
        for(auto it:m){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};