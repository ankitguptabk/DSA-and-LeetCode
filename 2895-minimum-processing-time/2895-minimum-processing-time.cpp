class Solution {
public:
    int minProcessingTime(vector<int>& p, vector<int>& t) {
        sort(t.begin(),t.end());
        sort(p.begin(),p.end(),greater<int>());
        int ans=0;
        int j=0;
        for(int i=0;i<t.size();i++){
            ans=max(ans,(t[i]+p[j]));
            if((i+1)%4==0){
                j++;
            }
        }
        return ans;
    }
};