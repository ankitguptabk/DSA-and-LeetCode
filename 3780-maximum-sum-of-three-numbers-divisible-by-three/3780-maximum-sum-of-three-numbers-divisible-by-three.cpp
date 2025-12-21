class Solution {
public:
    int maximumSum(vector<int>& n) {
        vector<int>a,b,c;
        for(int i=0;i<n.size();i++){
            if(n[i]%3==0) a.push_back(n[i]);
            else if(n[i]%3==1) b.push_back(n[i]);
            else c.push_back(n[i]);
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        sort(c.begin(),c.end(),greater<int>());
        int ans=0;
        if(a.size()>=3){
            ans=max(ans,a[0]+a[1]+a[2]);
        }
        if(b.size()>=3){
            ans=max(ans,b[0]+b[1]+b[2]);
        }
        if(c.size()>=3){
            ans=max(ans,c[0]+c[1]+c[2]);
        }
        if(!a.empty() && !b.empty() && !c.empty()){
            ans=max(ans,a[0]+b[0]+c[0]);
        }
        return ans;
    }
};