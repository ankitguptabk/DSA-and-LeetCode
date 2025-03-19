class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        sort(i.begin(),i.end());
        for(int j=0;j<i.size()-1;){
            if(i[j][1]>=i[j+1][0]){
                i[j][1]=max(i[j][1],i[j+1][1]);
                i.erase(i.begin()+j+1);
            }
            else j++;
        }
        return i;
    }
};