class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int c=1;
        while(true){
            if(!m.count(c)) return c;
            c++;
        }
        return c+1;
    }
};