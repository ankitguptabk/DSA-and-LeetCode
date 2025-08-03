class Solution {
public:
    int minRemoval(vector<int>& n, int k) {
        int ans=INT_MAX;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();i++){
            long long x=n[i];
            long long y=x*k;
            int left = i,right =n.size()-1, j = i-1;
            while (left <= right) {
                int mid = left+(right -left) / 2;
                if ((long long)n[mid] <= y) {
                    j =mid;
                    left =mid+1;
                }
                else {
                    right=mid-1;
                }
            }

            int rem=i+(n.size()-1-j);
            ans=min(ans, rem);
        }
        return ans;
    }
};