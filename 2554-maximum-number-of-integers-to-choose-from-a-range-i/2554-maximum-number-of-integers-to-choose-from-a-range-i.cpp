class Solution {
public:
    int maxCount(vector<int>& b, int n, int m) {
        int ans=0,c=1,s=0;
        vector<int>x;
        sort(b.begin(),b.end());
        while(c<=n && s+c<=m){
            if(find(b.begin(),b.end(),c)==b.end()){
                s+=c;
                x.push_back(c);
            }
            c++;
        }
        return (int)x.size();
    }
};