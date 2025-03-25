class Solution {
public:
    int minOperations(vector<int>& n) {
        int ans=0;
        for(int i=0;i<n.size()-2;i++){
            if(n[i]==0){
                    n[i]=1;
                    if(n[i+1]==0) n[i+1]=1;
                    else n[i+1]=0;
                    if(n[i+2]==0) n[i+2]=1;
                    else n[i+2]=0;
                    ans++;
            }
        }
        if(n[n.size()-2]==1 && n[n.size()-1]==1) return ans;
        return -1;
    }
};