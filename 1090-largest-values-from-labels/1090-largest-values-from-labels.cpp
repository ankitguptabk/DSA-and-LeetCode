class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        vector<pair<int,int>>p;
        int ans=0;
        int n=values.size();
        for(int i=0;i<n;i++){
            p.push_back({values[i],labels[i]});
        }
        sort(p.begin(),p.end(), greater<pair<int,int>>());
        unordered_set<int>used;
        unordered_map<int,int>m;
        int taken=0;
        for(int i=0;i<n && taken<numWanted;i++){
            int x=p[i].first, y=p[i].second;
            m[y]++;
            if(used.find(y)==used.end() && useLimit==1){
                ans+=x;
                taken++;
            }
            else if(m[y]<=useLimit){
                ans+=x;
                taken++;
            }
            used.insert(y);
        }
        return ans;
    }
};