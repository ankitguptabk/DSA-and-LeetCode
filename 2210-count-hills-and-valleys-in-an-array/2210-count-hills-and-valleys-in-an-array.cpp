class Solution {
public:
    int countHillValley(vector<int>& n) {
        int ans=0;
        for(int i=1;i<n.size()-1;i++){
            if(n[i]==n[i-1] || n[i]==n[i+1]){
                n.erase(n.begin()+i);
                i--;
                continue;
            }
            if((n[i]<n[i-1] && n[i]<n[i+1]) || (n[i]>n[i+1] && n[i]>n[i-1]) ){
                ans++;
            }
        }
        return ans;
    }
};