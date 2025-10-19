class Solution {
public:
    int missingMultiple(vector<int>& n, int k) {
        set<int>x;
        int y=INT_MIN;
        for(int i=0;i<n.size();i++){
            y=max(y,n[i]);
            if(n[i]%k==0){
                x.insert(n[i]);
            }
        }
        vector<int>a(x.begin(),x.end());
        if(a.size()==0) return k;
        vector<int>b;
        for(int i=1;i<=y+k;i++){
            if(i%k==0){
                b.push_back(i);
            }
        }
        for(int i=0;i<b.size();i++){
            if(i<a.size() && b[i]!=a[i]) return b[i];
            if(i>=a.size() && i<b.size()) return b[i];
        }
        return b[b.size()-1];
    }
};