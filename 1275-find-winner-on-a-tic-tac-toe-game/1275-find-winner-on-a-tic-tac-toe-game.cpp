class Solution {
public:
    string tictactoe(vector<vector<int>>& m) {
        vector<vector<char>> v(3, vector<char>(3, ' '));
        int l = 0;
        for(int i = 0; i < m.size(); i++) {
            int j = m[i][0], k = m[i][1];
            if(l % 2 == 0) v[j][k] = 'x';
            else v[j][k] = 'o';
            l++;
        }

        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(i+2<3 && v[i][j]=='x' && v[i+1][j]=='x' && v[i+2][j]=='x') return "A";
                else if(i+2<3 && v[i][j]=='o' && v[i+1][j]=='o' && v[i+2][j]=='o') return "B"; // ✅ fixed line
                else if(j+2<3 && v[i][j]=='x' && v[i][j+1]=='x' && v[i][j+2]=='x') return "A";
                else if(j+2<3 && v[i][j]=='o' && v[i][j+1]=='o' && v[i][j+2]=='o') return "B";
                else if(i+2<3 && j+2<3 && v[i][j]=='x' && v[i+1][j+1]=='x' && v[i+2][j+2] =='x') return "A";
                else if(i+2<3 && j+2<3 && v[i][j]=='o' && v[i+1][j+1]=='o' && v[i+2][j+2] =='o') return "B";
                else if(i+2<3 && j-2>=0 && v[i][j]=='x' && v[i+1][j-1]=='x' && v[i+2][j-2]=='x') return "A";
                else if(i+2<3 && j-2>=0 && v[i][j]=='o' && v[i+1][j-1]=='o' && v[i+2][j-2]=='o') return "B";
            }
        }
        if(m.size() < 9) return "Pending";
        else return "Draw";
    }
};
