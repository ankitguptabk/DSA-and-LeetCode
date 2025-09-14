class Solution {
public:
    int smallestAbsent(vector<int>& n) {
        int avg=0;
        int s=0;
        for(int i=0;i<n.size();i++){
            s+=n[i];
        }
        avg=s/(int)n.size();
        if(avg<=0) avg=0;
        int ans=avg+1;
        for(int i=0;i<n.size();i++){
            if(find(n.begin(),n.end(),ans)==n.end()){
                break;
            }
            else ans++;
        }
        return ans;
    }
};