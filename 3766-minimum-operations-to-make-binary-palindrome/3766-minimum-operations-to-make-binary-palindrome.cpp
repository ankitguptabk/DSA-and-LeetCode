class Solution {
public:
    bool palin(string s){
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-1-i]) return false;
        }
        return true;
    }
    vector<int> minOperations(vector<int>& n) {
        vector<int>ans;
        for(int i=0;i<n.size();i++){
            int x=n[i];
            int g=INT_MAX,f=x,b=x;
            bool a=false,d=false;
            while(a==false){
                string c=bitset<16>(f).to_string();
                int p=c.find('1');
                c=c.substr(p);
                if(palin(c)){
                    a=true;
                }
                else f++;
            }
            while(d==false && b>=1){
                string c=bitset<16>(b).to_string();
                int p=c.find('1');
                c=c.substr(p);
                if(palin(c)){
                    d=true;
                }
                else b--;
            }
            g=min(g,(x-b));
            g=min(g,(f-x));
            ans.push_back(g);
        }
        return ans;
    }
};