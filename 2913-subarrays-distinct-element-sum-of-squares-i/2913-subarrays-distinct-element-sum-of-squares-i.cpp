class Solution {
public:
    int sumCounts(vector<int>& n) {
        int ans=0;
        for(int s=0;s<n.size();s++){
            unordered_map<int,int>f;
            int distinct_c=0;
            for(int e=s;e<n.size();e++){
                if(f[n[e]]==0){
                    distinct_c++;
                }
                f[n[e]]++;
                ans+=(distinct_c*distinct_c);
            }
        }
        return ans;
    } 
};