class Solution {
public:
    void rotate(vector<int>& n, int k) {
        vector<int>a(n.size());
        int temp=n[0];
        for(int i=0;i<n.size();i++){
            a[(i+k)%n.size()]=n[i];
        }
        for(int i=0;i<a.size();i++){
            n[i]=a[i];
        }
    }
};