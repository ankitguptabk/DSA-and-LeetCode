class Solution {
public:
    bool isSorted(vector<int>& n){
        for(int i=0;i<n.size()-1;i++){
            if(n[i]>n[i+1]) return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& n) {
        int ans=0;
        while(!isSorted(n)){
            int ind=-1;
            int minsum=INT_MAX;
            for(int i=0;i<n.size()-1;i++){
                int psum=n[i]+n[i+1];
                if(minsum>psum){
                    minsum=psum;
                    ind=i;
                }
            }
            n[ind]=n[ind]+n[ind+1];
            n.erase(n.begin()+ind+1);
            ans++;
        }
        return ans;
    }
};