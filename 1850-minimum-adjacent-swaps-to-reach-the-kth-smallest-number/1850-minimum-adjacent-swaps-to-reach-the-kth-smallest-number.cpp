class Solution {
public:
    int getMinSwaps(string n, int k) {
        int ans=0;
        string a=n;
        for(int i=0;i<k;i++){
            next_permutation(a.begin(),a.end());
        }
        for(int i=0;i<n.size();i++){
            if(n[i]!=a[i]){
                int j=i+1;
                while(j<n.size() && n[j]!=a[i]) j++;
                ans+=j-i;
                char c=n[j];
                n.erase(n.begin()+j);
                n.insert(n.begin()+i,c);
            }
        }
        return ans;
    }
};