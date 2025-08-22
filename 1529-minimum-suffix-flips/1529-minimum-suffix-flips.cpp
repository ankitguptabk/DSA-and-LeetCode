class Solution {
public:
    int minFlips(string t){
        char pre='0';
        int ans=0;
        for (int i=0;i<t.size();i++) {
            if(t[i]!=pre){
                ans++;
                pre=t[i];
            }
        }
        return ans;
    }
};