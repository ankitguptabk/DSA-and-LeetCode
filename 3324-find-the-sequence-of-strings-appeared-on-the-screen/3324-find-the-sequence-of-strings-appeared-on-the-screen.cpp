class Solution {
public:
    vector<string> stringSequence(string t) {
        string s="";
        vector<string>ans;
        for(int i=0;i<t.size();i++){
            char c=t[i];
            char x='a';
            s+=x;
            ans.push_back(s);
            while(x!=c){
                s.pop_back();
                x=x+1;
                s+=x;
                ans.push_back(s);
            }
        }
        return ans;
    }
};