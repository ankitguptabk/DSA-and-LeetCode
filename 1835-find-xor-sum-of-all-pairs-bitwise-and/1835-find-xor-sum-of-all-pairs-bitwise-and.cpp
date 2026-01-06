class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        long long ans=0,x=0,y=0;
        int m=arr1.size(), n=arr2.size();
        for(int i=0;i<m;i++){
            x^=arr1[i];
        }
        for(int i=0;i<n;i++){
            y^=arr2[i];
        }
        ans=x&y;
        return (int) ans;
    }
};