class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(int i=0;i<stones.size();i++){
            for(int j=0;j<jewels.size();j++){
                if(jewels[j]==stones[i]){
                    ans++;
                }
            }
        }
        return ans;
    }
};