class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& s) {
        int c1=0,c0=0;
        for(int i=0;i<st.size();i++){
            if(st[i]==1) c1++;
            else c0++;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]==1){
                if(c1>0){
                    c1--;
                }
                else return c0;
            }
            else{
                if(c0>0) c0--;
                else return c1;
            }
        }
        return 0;
    }
};