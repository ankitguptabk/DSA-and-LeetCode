class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>ans;
        unordered_set<double>f;
        for(int i=1;i<n;i++){
            string x="";
            for(int j=i+1;j<=n;j++){
                double a=static_cast<double>(i)/static_cast<double>(j);
                if(f.count(a)){
                    continue;
                }
                f.insert(a);
                x=to_string(i)+"/"+to_string(j);
                ans.push_back(x);
            }
        }
        return ans;
    }
};