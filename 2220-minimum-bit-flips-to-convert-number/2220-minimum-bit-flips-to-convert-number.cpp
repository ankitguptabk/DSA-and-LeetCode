class Solution {
public:
    int minBitFlips(int s, int g) {
        int ans=0;
        string a=bitset<32>(s).to_string();
        string b=bitset<32>(g).to_string();
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]) ans++;
        }
        return ans;
    }
};