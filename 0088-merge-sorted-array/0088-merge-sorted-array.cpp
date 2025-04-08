class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        while(i<n){
            nums1[i+m]=nums2[i];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};