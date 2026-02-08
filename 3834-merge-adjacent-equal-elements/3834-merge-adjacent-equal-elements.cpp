class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& num) {
        vector<long long>nums;
        for(int x:num){
            long long curr=x;
            while(!nums.empty() && curr==nums.back()){
                curr*=2;
                nums.pop_back();
            }
            nums.push_back(curr);
        }
        return nums;
    }
};