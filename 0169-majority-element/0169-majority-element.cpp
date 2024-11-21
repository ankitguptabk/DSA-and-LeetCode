class Solution {
public:
    int majorityElement(vector<int>& n) {
        int a=0;
        unordered_map<int,int>m;
        for(int i=0;i<n.size();i++){
            m[n[i]]++;
        }
        for(auto const & pair:m){
            if(pair.second>n.size()/2) return pair.first;
        }
        return n[0];
    }
};