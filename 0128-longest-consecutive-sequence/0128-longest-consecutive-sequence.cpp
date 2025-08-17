class Solution {
public:
    int longestConsecutive(vector<int>& n) {
        unordered_set<int>s(n.begin(),n.end());
        int ans=0;
        for(int val:s){
            if(s.find(val-1)==s.end()){
                int x=val;
                int a=1;
                while(s.find(x+1)!=s.end()){
                    a++;
                    x++;
                }
                ans=max(ans,a);
            }
        }
        return ans;
    }
};