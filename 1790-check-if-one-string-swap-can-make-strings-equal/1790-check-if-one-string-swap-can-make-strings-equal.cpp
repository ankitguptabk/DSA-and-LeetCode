class Solution {
public:
    bool areAlmostEqual(string a, string b) {
        int x=0;
        unordered_map<char,int>m,n;
        for(int i=0;i<a.size();i++){
            m[a[i]]++;
            n[b[i]]++;
        }
        if (m.size() != n.size()) return false;
        for(auto const & pair:m){
            if(n[pair.first]!=pair.second) return false;
        }
        vector<int>mismatch_ind;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]) mismatch_ind.push_back(i);
        }
        if(mismatch_ind.size()==0) return true;
        else if(mismatch_ind.size()!=2) return false;
        int i=mismatch_ind[0],j=mismatch_ind[1];
        return a[i]==b[j] && a[j]==b[i];
    }
};