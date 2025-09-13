class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& n, vector<int>& q, int x) {
        vector<int>ans(q.size(),-1);
        int c=0;
        unordered_map<int,int>m;
        for(int i=0;i<n.size();i++){
            if(n[i]==x){
                c++;
                m[c]=i;
            }
        }
        for(int i=0;i<q.size();i++){
            if(m.find(q[i])!=m.end()){
                ans[i]=m[q[i]];
            }
        }
        return ans;
    }
};