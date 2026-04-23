class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int c=1;
        while(true){
            if(find(nums.begin(),nums.end(),c)==nums.end()) return c;
            c++;
        }
        return c+1;
    }
};