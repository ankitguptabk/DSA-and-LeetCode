class Solution {
public:
    int kthFactor(int n, int k) {
       vector<int>a;
       for(int i=1;i*i<=n;i++){
        if(n%i==0 && i!=n/i){
            a.push_back(i);
            a.push_back(n/i);
        }
        else if(n%i==0) {
            a.push_back(i);
        }
       } 
       sort(a.begin(),a.end());
       if(a.size()>=k)return a[k-1];
       return -1;
    }
};