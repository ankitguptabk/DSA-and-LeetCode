class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> s;
        set<int> t;
        for (auto a : arr) {
            set<int> temp;
            temp.insert(a);
            for (auto b : t) {
                temp.insert(b | a);
            }
            t = temp;
            for (auto c : t) {
                s.insert(c);
            }
        }
        return s.size();
    }
};
