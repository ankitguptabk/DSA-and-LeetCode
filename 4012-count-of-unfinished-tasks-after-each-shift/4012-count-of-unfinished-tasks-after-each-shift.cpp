class Solution {
public:
    vector<int> countTasks(vector<int>& t, vector<int>& s) {
        vector<int>ans;
        int n=t.size();
        vector<long long>pre(n);
        pre[0]=t[0];

        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+t[i];
        }
        long long sum=pre[n-1], curr=0;
        
        for(int i=0;i<s.size();i++){
            curr+=s[i];

            if(curr>=sum){
                ans.push_back(0);
                curr=0;
            }
            else{
                int l=0,r=n-1;

                while(l<=r){
                    int mid=(l+r)/2;

                    if(pre[mid]<=curr){
                        l=mid+1;
                    }
                    else{
                        r=mid-1;
                    }
                }

                ans.push_back(n-l);
            }
        }
        return ans;
    }
};