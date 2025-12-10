class Solution {
public:
    long long totalScore(int hp, vector<int>& d, vector<int>& r) {
        int n=d.size();
        vector<long long> pref(n+1,0);

        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+d[i];
        }
        long long ans=0;
        for(int j=0;j<n;j++){
            long long need=pref[j+1]-(long long)hp+r[j];

            int l=0, h=j, pos=j+1;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(pref[mid]>=need){
                    pos=mid;
                    h=mid-1;
                }else{
                    l=mid+1;
                }
            }
            if(pos<=j){
                ans+=j-pos+1;
            }
        }
        return ans;
    }
};