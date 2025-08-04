class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int>m;
            for(int j=i;j<s.size();j++){
                m[s[j]]++;
                if(j-i+1>=3){
                    int x=INT_MIN,y=INT_MAX;
                    for(auto const &p:m){
                        x=max(x,p.second);
                        y=min(y,p.second);
                    }
                    ans+=x-y;
                }
            }
        }
        return ans;
    }
};