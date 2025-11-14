class Solution {
public:
    long long putMarbles(vector<int>& w, int k) {
        vector<long long>pair;
        for(int i=0;i<w.size()-1;i++){
            pair.push_back((long long)w[i]+(long long)w[i+1]);
        }
        sort(pair.begin(),pair.end());
        long long mini=0,maxi=0;
        for(int i=0;i<k-1;i++){
            mini+=pair[i];
            maxi+=pair[pair.size()-1-i];
        }
        return maxi-mini;
    }
};