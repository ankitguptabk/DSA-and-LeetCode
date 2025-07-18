class Solution {
public:
    bool isAlienSorted(vector<string>& w, string o) {
        unordered_map<char,int>m;
        for(int i=0;i<26;i++){
            m[o[i]]=i;
        }
        for(int i=0;i<w.size()-1;i++){
            string s=w[i],x=w[i+1];
            int a=min(s.size(),x.size());
            bool differ=false;
            for(int j=0;j<a;j++){
                if(m[s[j]]<m[x[j]]){
                    differ=true;
                    break;
                }
                else if(m[s[j]]>m[x[j]]) return false;
            }
            if(!differ && s.size()>x.size()) return false;
        }
        return true;
    }
};