class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stk;
        int n=s.size();
        stk.push(0);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                stk.push(0);
            }
            else{
                int inner=stk.top();
                stk.pop();
                int val;
                if(inner==0){
                    val=1;
                }
                else{
                    val=2*inner;
                }
                stk.top()+=val;
            }
        }
        return stk.top();
    }
};