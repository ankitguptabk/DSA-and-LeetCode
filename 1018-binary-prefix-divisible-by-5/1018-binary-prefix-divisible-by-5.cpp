class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& n) {
        string s="";
        vector<bool>ans;
        for(int i=0;i<n.size();i++){
            s+=to_string(n[i]);
            int num=0;
            for(int j=s.size()-1;j>=0;j--){
                num+=num*2+(s[j]-'0');
                num%=5;
            }
            string a=to_string(num);
            if(a[a.size()-1]=='0' || a[a.size()-1]=='5' ) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};