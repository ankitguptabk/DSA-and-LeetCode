class Solution {
public:
    int smallestNumber(int n) {
        string s=bitset<32>(n).to_string();
        size_t firstone=s.find('1');
        int b=s.size()-firstone;
        int ans=pow(2,b)-1;
        return ans;
    }
};