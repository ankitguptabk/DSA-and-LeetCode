class Solution {
public:
    int findNumbers(vector<int>& n) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            if(to_string(n[i]).size()%2==0){
                ans++;
            }
        }
        return ans;
    }
};