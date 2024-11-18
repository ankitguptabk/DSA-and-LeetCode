class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() <= 1) return 0;
        int a=0,c=0,ci=0;
        for(int i=0;i<nums.size();i++){
            a=max(a,i+nums[i]);
            if(i==ci){
                c++;
                ci=a;
                if(ci>=nums.size()-1) break;
            }
        }
        return c;
    }
};