class Solution {
public:
    int binaryGap(int n) {
        int ans=0;
        string s=bitset<32>(n).to_string();
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                int j=i+1;
                while(j<s.size() && s[j]=='0'){
                    j++;
                }
                if(j<s.size() && s[j]=='1'){
                    ans=max(ans,(j-i));
                }
                i=j-1;
            }
        }
        return ans;
    }
};