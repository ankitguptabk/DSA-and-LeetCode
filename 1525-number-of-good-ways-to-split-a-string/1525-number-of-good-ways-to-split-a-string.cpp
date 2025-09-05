class Solution {
public:
    int numSplits(string s) {
        int n=s.size();
        vector<int>left(n), right(n);
        unordered_set<char> st;
        for (int i=0; i < n; i++) {
            st.insert(s[i]);
            left[i]=st.size();
        }
        st.clear();
        for (int i =n-1; i >= 0;i--) {
            st.insert(s[i]);
            right[i]=st.size();
        }
        int ans = 0;
        for (int i = 0; i <n-1;i++) {
            if (left[i] == right[i+1]) ans++;
        }
        return ans;
    }
};
