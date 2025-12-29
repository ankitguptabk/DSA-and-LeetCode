class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int count=0;
        for(int x:derived){
            count+=x;
        }
        return count%2==0;
    }
};