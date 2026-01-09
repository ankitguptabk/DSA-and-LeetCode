class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int>ans(n,0);
        stack<int>stk;
        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && heights[stk.top()]<heights[i]){
               ans[i]++;
               stk.pop();
            }
            if(!stk.empty()) ans[i]++;
            stk.push(i);
        }
        return ans;
    }
};