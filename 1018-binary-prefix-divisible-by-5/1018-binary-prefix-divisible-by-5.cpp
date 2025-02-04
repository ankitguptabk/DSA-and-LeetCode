class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& n) {
        string s="";
        vector<bool>ans;
        int num=0;
        for(int i=0;i<n.size();i++){
            s+=to_string(n[i]);
            num=num*2+(s.back()-'0');
            num%=5;
            if(num==0) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};