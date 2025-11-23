class Solution {
public:
    int totalWaviness(int a, int b) {
        int ans=0;
        for(int i=a;i<=b;i++){
            if(i<100) continue;
            string s=to_string(i);
            for(int j=1;j<s.size()-1;j++){
                if((s[j]>s[j-1] && s[j]>s[j+1]) || (s[j]<s[j-1] && s[j]<s[j+1])) ans++;
                else continue;
            }
        }
        return ans;
    }
};