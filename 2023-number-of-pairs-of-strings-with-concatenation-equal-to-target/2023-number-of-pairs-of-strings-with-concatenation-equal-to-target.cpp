class Solution {
public:
    int numOfPairs(vector<string>& n, string t) {
        int ans=0;
        for(int i=0;i<n.size();i++){
            for(int j=i+1;j<n.size();j++){
                if(n[i]+n[j]==t) ans++;
                if(n[j]+n[i]==t) ans++;
            }
        }
        return ans;
    }
};