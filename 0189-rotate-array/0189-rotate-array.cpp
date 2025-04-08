class Solution {
public:
    void rotate(vector<int>& n, int k) {
        vector<int>a(n.size());
        for(int i=0;i<n.size();i++){
            a[(i+k)%n.size()]=n[i];
        }
        n=a;
    }
};