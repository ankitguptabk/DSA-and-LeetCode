class Solution {
public:
    vector<string> findWords(vector<string>& s) {
        vector<string>ans;
        unordered_set<char> first={
            'q','w','e','r','t','y','u','i','o','p','Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'
        };
        unordered_set<char> second={
            'a','s','d','f','g','h','j','k','l','A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'
        };
        unordered_set<char> third={
            'z','x','c','v','b','n','m','Z', 'X', 'C', 'V', 'B', 'N', 'M'
        };
        for(int i=0;i<s.size();i++){
            char c=s[i][0];
            bool f=true;
            if(first.find(c)!=first.end()){
                for(int j=1;j<s[i].size();j++){
                    if(first.find(s[i][j])!=first.end()){
                        continue;
                    }
                    else {
                        f=false;
                        break;
                    }
                }
            }
            if(second.find(c)!=second.end()){
                for(int j=1;j<s[i].size();j++){
                    if(second.find(s[i][j])!=second.end()){
                        continue;
                    }
                    else {
                        f=false;
                        break;
                    }
                }
            }
            if(third.find(c)!=third.end()){
                for(int j=1;j<s[i].size();j++){
                    if(third.find(s[i][j])!=third.end()){
                        continue;
                    }
                    else {
                        f=false;
                        break;
                    }
                }
            }
            if(f) ans.push_back(s[i]);
        }
        return ans;
    }
};