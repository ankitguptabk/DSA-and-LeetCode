class Solution {
public:
    int maxConsecutiveAnswers(string a, int k) {
        int ansT=getMax(a,k,'T');
        int ansF=getMax(a,k,'F');
        return max(ansF, ansT);
    }
    int getMax (string &a, int k, char ch){
        int ans=0;
        vector<int> pref(a.size(),0);
        vector<int> pos(a.size(),0);
        int idx=0;

        pref[0]=1;
        if(a[0]!=ch) pos[idx++]=0;
        ans=1;

        for(int i=1;i<a.size();i++){

            pref[i]=pref[i-1]+1;

            if(a[i]!=ch){
                pos[idx++]=i;
            }
            if(idx > k){
                int start=pos[idx-k-1];
                pref[i]=i-start;
            }
            ans=max(ans,pref[i]);
        }
        return ans;
    }
};