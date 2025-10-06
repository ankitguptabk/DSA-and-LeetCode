class Solution {
public:
    string removeSubstring(string s, int k) {
        string st;
        for(int i=0;i<s.size();i++){
            st.push_back(s[i]);
            int sz=st.size();
            if(sz>=2*k){
                bool ok=true;
                for(int j=0;j<k;j++){
                    if(st[sz-2*k+j]!='(' || st[sz-k+j]!=')'){
                        ok=false;
                        break;
                    }
                }
                if(ok) st.erase(st.end()-2*k, st.end());
            }
        }
        return st;
    }
};