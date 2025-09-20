class Solution {
public:
    vector<string> removeAnagrams(vector<string>& w) {
        vector<string> ans;
        bool f=false;
        for(int i=0;i<w.size();i++){
            string x=w[i],z=w[i],y="",a="";
            if(i+1<w.size()) y=w[i+1];
            if(i-1>=0) a=w[i-1];
            sort(a.begin(),a.end());
            sort(z.begin(),z.end());
            sort(y.begin(),y.end());
            if(a==z && z==y){
                continue;
            }
            else if(a!=z){
                ans.push_back(x);
            }
        }
        return ans;
    }
};