class Solution {
public:
    string smallestNumber(string p) {
        string ans="";
        stack<int>stk;
        for(int i=0;i<=p.size();i++){
            stk.push(i+1);
            if(i==p.size() || p[i]=='I'){
                while(stk.size()>0){
                    ans+=stk.top()+'0';
                    stk.pop();
                }
            }
        }
        return ans;
    }
};