class Solution {
public:
    int minimumIndex(vector<int>& n) {
        unordered_map<int,int>m;
        int x=0;
        vector<int>a((int)n.size(),0);
        for(int i=0;i<(int)n.size();i++){
            m[n[i]]++;
            a[i]=m[n[i]];
            if(m[n[i]]>x) x=m[n[i]];
        }
        int l=0,r=(int)n.size()-1;
        while(l<r){
            if(a[r]==x && n[r]==n[l] && a[l]>(l+1)/2 && (x-a[l])>((int)n.size()-l-1)/2){
                return l;
            }
            else if(a[r]!=x) r--;
            else l++;
        }
        return -1;
    }
};