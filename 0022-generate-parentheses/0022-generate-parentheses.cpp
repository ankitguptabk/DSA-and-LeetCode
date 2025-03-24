class Solution {
public:
    void generate(int oc,int cc,int n, string c, vector<string>& ans){
        if(c.size()==2*n){
            ans.push_back(c);
        }
        if(oc<n){
            generate(oc+1,cc,n,c+"(",ans);
        }
        if(cc<oc){
            generate(oc,cc+1,n,c+")",ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generate(0,0,n,"",ans);
        return ans;
    }
};