class Solution {
public:
    int minOperations(vector<int>& n, vector<int>& d) {
        sort(n.begin(),n.end());
        int x=d[0], y=d[d.size()-1];
        int hcf=d[0];
        for(int z:d){
            hcf=__gcd(hcf,z);
        }
        for(int i=0;i<n.size();i++){
            if(hcf%n[i]==0) return i;
        }
        return -1;
    }
};