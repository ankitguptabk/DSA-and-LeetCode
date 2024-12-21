class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxor=0;
        for(int i=0;i<nums.size();i++){
            maxor=max(maxor, maxor|nums[i]);
        }
        int c=0;
        int tot=1<<nums.size(); //2^n; total subset
        for(int i=0;i<tot;i++){
            int curror=0;
            for(int j=0;j<nums.size();j++){
                if(i & (1<<j)){
                    curror|=nums[j];
                }
            }
            if(curror==maxor){
                c++;
            }
        }
        return c;
    }
};