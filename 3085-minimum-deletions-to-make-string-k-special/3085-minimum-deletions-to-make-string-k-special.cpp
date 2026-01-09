class Solution {
public:
    int minimumDeletions(string word, int k) {
        int ans=0;
        unordered_map<char,int>m;
        for(char c:word){
            m[c]++;
        }
        int n=word.size();
        vector<int>f;
        for (auto &x:m){
            f.push_back(x.second);
        }
        sort(f.begin(),f.end());
        int res=INT_MAX;
        for(int i=0;i<f.size();i++){
            int t=f[i];
            int del=0;
            for(int j=0;j<f.size();j++){
                if(f[j]<t){
                    del+=f[j];
                }
                else if(f[j]>t+k){
                    del+=(f[j]-(t+k));
                }
            }
            res=min(res,del);
        }
        ans=res;
        if(res==INT_MAX) return 0;
        return ans;
    }
};