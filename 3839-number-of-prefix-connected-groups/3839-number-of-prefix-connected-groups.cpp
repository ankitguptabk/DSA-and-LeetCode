class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        int n=words.size();
        int ans=0;
        sort(words.begin(), words.end());
        vector<bool>used(n,false);
        for(int i=0;i<n;i++){
            string pref=words[i].substr(0,k);
            int c=0, j=i+1;
            if(words[i].size()<k) continue;
            while(j<n && pref==words[j].substr(0,k)){
                if(pref==words[j].substr(0,k)){
                    c++;
                    j++;
                }
            }
            i=j-1;
            if(c>0) ans++;
        }
        return ans;
    }
};