class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& i) {
        sort(i.begin(),i.end());
        for(int j=0;j<i.size();j++){
            for(int k=j+1;k<i.size();){
                if(i[j][1]>=i[k][0]){
                    i[j][1]=max(i[k][1],i[j][1]);
                    i.erase(i.begin()+k);
                }
                else k++;
            }
        }
        return i;
    }
};