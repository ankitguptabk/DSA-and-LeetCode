class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        vector<pair<char,pair<int,int>>> paired;
        int n=s.size();
        for(int i=0;i<n;i++){
            char first=s[i];
            int x=i;
            bool exist=false;
            for(auto const &p:paired){
                if(first==p.first) {
                    exist=true;
                    break;
                }
            }
            if(exist) continue;
            for(int j=n-1;j>=0;j--){
                if(s[j]==first){
                    paired.push_back({first,{x,j}});
                    break;
                }
            }
        }
        int start=paired[0].second.first;
        int end=paired[0].second.second;
        for(int i=1;i<paired.size();i++){
            int curr_start=paired[i].second.first;
            int curr_end=paired[i].second.second;
            if(curr_start<=end){
                end=max(end,curr_end);
            }
            else{
                ans.push_back(end-start+1);
                start=curr_start;
                end=curr_end;
            }
        }
        ans.push_back(end-start+1);
        return ans;
    }
};