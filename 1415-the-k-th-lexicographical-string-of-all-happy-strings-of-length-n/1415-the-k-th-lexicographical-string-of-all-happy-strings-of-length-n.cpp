class Solution {
public:
    string getHappyString(int n, int k) {
        queue<string>q;
        q.push("a");
        q.push("b");
        q.push("c");
        vector<string>ans;
        while(!q.empty()){
            string s=q.front();
            q.pop();
            if(s.size()==n){
                ans.push_back(s);
                continue;
            }
            for(char c:{'a','b','c'}){
                if(s.back()!=c){
                    q.push(s+c);
                }
            }
        }
        if(k<=ans.size()) return ans[k-1];
        return "";
    }
};