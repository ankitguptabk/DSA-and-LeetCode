class Solution {
public:
    vector<int> countTasks(vector<int>& t, vector<int>& s) {
        int n=s.size(),m=t.size();
        vector<int>ans;
        vector<long long>pre(m);

        pre[0]=t[0];
        for(int i=1;i<m;i++){
            pre[i]=pre[i-1]+t[i];
        }
        long long sum=pre[m-1],curr=0;

        for(int i=0;i<n;i++){
            curr+=s[i];

            if(curr>=sum){
                ans.push_back(0);
                curr=0;
            }
            else{
                int l=0,r=m-1;

                while(l<=r){
                    int mid=(l+r)/2;

                    if(pre[mid]<=curr){
                        l=mid+1;
                    }
                    else{
                        r=mid-1;
                    }
                }

                ans.push_back(m-l);
            }
        }
        return ans;
    }
};