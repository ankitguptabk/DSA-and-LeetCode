class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n,false);
        vector<int>keys={0};
        visited[0]=true;
        for(int i=0;i<keys.size();i++){
            int room=keys[i];
            for(int key:rooms[room]){
                if(!visited[key]){
                    visited[key]=true;
                    keys.push_back(key);
                }
            }
        }
        for(bool v:visited){
            if(v==false) return false;
        }
        return true;
    }
};