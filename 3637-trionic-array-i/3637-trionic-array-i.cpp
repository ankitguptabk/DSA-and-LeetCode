class Solution {
public:
    bool isTrionic(vector<int>& n) {
        if(n[0]>n[1] ||n.size()<3) return false;
        vector<int>x,y,z;
        x.push_back(n[0]);
        int j=-1,k=-1;
        for(int i=1;i<n.size();i++){
            if(n[i]<n[i-1]){
                j=i;
                break;
            }
            x.push_back(n[i]);
        }
        for(int i=j;i<n.size();i++){
            if(n[i]>n[i-1]){
                k=i;
                break;
            }
            y.push_back(n[i]);
        }
        for(int i=k;i<n.size();i++){
            z.push_back(n[i]);
        }
        for(int i=1;i<x.size();i++){
            if(x[i]<=x[i-1]) return false;
        }
        for(int i=1;i<y.size();i++){
            if(y[i]>=y[i-1]) return false;
        }
        for(int i=1;i<z.size();i++){
            if(z[i]<=z[i-1]) return false;
        }
        if(x.empty() || y.empty() || z.empty()) return false;
        return true;
    }
};