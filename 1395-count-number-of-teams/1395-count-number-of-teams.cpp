class Solution {
public:
    int numTeams(vector<int>& r){
        int ans=0, n=r.size();
        for(int j=1;j<n-1;j++){
            int smlleft=0,bigleft=0;
            int smlright=0,bigright=0;
            for(int i=0;i<j;i++){
                if(r[i]<r[j]) smlleft++;
                if(r[i]>r[j]) bigleft++;
            }
            for(int i=j+1;i<n;i++){
                if(r[i]<r[j]) smlright++;
                if(r[i]>r[j]) bigright++;
            }
            ans+=smlleft*bigright+bigleft*smlright;
        }
        return ans;
    }
};