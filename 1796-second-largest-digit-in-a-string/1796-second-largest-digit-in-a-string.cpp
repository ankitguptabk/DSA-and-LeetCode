class Solution {
public:
    int secondHighest(string s) {
        vector<int>a;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                a.push_back(s[i]-'0');
            }
        }
        if(a.empty()) return -1;
        sort(a.begin(),a.end());
        int x=a.back();
        for(int i=a.size()-2;i>=0;i--){
            if(a[i]!=x) return a[i];
        }
        return -1;
    }
};