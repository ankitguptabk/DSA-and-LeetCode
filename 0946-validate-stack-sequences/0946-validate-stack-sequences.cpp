class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>stk;
        int n=pushed.size();
        int j=0;
        for(int i=0;i<n;i++){
            stk.push(pushed[i]);
            while(!stk.empty() && stk.top()==popped[j]){
                stk.pop();
                j++;
            }
        }
        return stk.empty();
    }
};