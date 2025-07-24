class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& a, int k) {
        vector<float>b;
        for(int i=0;i<a.size()-1;i++){
            for(int j=a.size()-1;j>=i+1;j--){
                b.push_back(static_cast<float>(a[i])/static_cast<float>(a[j]));
            }
        }
        sort(b.begin(),b.end());
        float x=b[k-1];
        for(int i=0;i<a.size()-1;i++){
            for(int j=a.size()-1;j>=i+1;j--){
                if(static_cast<float>(a[i])/static_cast<float>(a[j])==x) return {a[i],a[j]};
            }
        }
        return {a[0],a[a.size()-1]};
    }
};