class Solution {
public:
    vector<string> letterCombinations(string d) {
        if(d=="") return {};
        vector<string>combi={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans={""};
        for(char c:d){
            vector<string>x;
            for(string comb:ans){
                for(char l:combi[c-'2']){
                    x.push_back(comb+l);
                }
            }
            ans=x;
        }
        return ans;
    }
};