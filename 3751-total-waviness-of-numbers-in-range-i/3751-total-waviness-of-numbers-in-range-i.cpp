class Solution {
public:
    int totalWaviness(int a, int b) {
        int ans=0;
        vector<string>s;
        for(int i=a;i<=b;i++){
            if(i<100) continue;
            s.push_back(to_string(i));
        }
        for(int i=0;i<s.size();i++){
            for(int j=1;j<s[i].size()-1;j++){
                if((s[i][j]>s[i][j-1] && s[i][j]>s[i][j+1]) || (s[i][j]<s[i][j-1] && s[i][j]<s[i][j+1])) ans++;
                else continue;
            }
        }
        return ans;
    }
};