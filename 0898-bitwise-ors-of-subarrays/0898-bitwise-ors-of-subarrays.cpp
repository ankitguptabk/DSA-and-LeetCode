class Solution {
public:
    int subarrayBitwiseORs(vector<int>& a) {
        unordered_set<int> s, curr;
        for (int i = 0; i < a.size(); i++) { 
            unordered_set<int> temp = {a[i]};  
            for (int x : curr) {  
                temp.insert(x | a[i]);  
                if ((x | a[i]) == INT_MAX) break;  
            }
            curr = temp;  
            s.insert(curr.begin(), curr.end());  
        }
        return s.size();
    }
};
