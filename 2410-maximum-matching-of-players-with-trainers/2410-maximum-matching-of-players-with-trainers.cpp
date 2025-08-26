class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        int k=0,ans=0;
        for(int i=0;i<p.size();i++){
            int j=k;
            for(j=k;j<t.size();j++){
                if(p[i]<=t[j]){
                    ans++;
                    k=j+1;
                    break;
                }
            }
        }
        return ans;
    }
};