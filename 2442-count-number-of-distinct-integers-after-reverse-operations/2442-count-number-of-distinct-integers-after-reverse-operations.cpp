class Solution {
public:
    int countDistinctIntegers(vector<int>& n) {
        int size=n.size();
        for(int i=0;i<size;i++){
            string s=to_string(n[i]);
            reverse(s.begin(),s.end());
            n.push_back(stoi(s));
        }
        unordered_set<int>s(n.begin(),n.end());
        return s.size();
    }
};