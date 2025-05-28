class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& n) {
        int s = n.size();
        vector<int> pre(s),ans(s);
        pre[0] = n[0];
        for (int i = 1; i< s; i++) pre[i] = pre[i - 1] + n[i];
        for (int i = 0; i<s; i++) {
            int l;
            if (i > 0) l=pre[i - 1];
            else l = 0;
            int r = pre[s - 1]-pre[i];
            ans[i] = i * n[i]-l+r-(s-1-i)*n[i];
        }
        return ans;
    }
};
