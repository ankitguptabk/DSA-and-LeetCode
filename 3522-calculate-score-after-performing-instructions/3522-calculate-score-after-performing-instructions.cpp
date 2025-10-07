class Solution {
public:
    long long calculateScore(vector<string>& ins, vector<int>& v) {
        long long ans=0;
        int n=ins.size();
        vector<bool>f(n,false);
        for(int i=0;i<n; ){
            if(f[i]) break;
            if(ins[i]=="jump"){
                f[i]=true;
                if(i+v[i]>=0 && i+v[i]<n){
                    i=i+v[i];
                }
                else break;
            }
            else if(ins[i]=="add"){
                f[i]=true;
                ans+=v[i];
                i++;
            }
        }
        return ans;
    }
};