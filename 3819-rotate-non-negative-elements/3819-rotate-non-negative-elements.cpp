class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> newArr;
        for(int num:nums){
            if(num>=0) newArr.push_back(num);
        }
        int m=newArr.size();
        if(m==0) return nums;
        k= k % m;
        vector<bool> vis(m, false);
        for(int i=0; i<m; i++){
            if(vis[i]) continue;
            int curr= i;
            int prev= newArr[curr];
            while( vis[curr]==false){
                vis[curr]=true;
                int next= (curr-k+m)%m;
                swap(prev, newArr[next]);
                curr=next;
            }
        }
        int idx=0;
        for(int i=0; i<n; i++){
            if(nums[i]>=0){
                nums[i]= newArr[idx++];
            }
        }
        return nums;
    }
};