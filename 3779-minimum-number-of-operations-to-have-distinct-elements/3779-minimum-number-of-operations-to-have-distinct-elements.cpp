class Solution {
public:
    int minOperations(vector<int>& n) {
        unordered_map<int,int>m;
        int ans=0;
        for(int i=n.size()-1;i>=0;i--){
            m[n[i]]++;
            if(m[n[i]]==2){
                if((i+1)%3==0){
                    ans=(i+1)/3;
                    return ans;
                }
                else{
                    ans=(i+1)/3+1;
                    return ans;
                }
            }
        }
        return ans;
    }
};