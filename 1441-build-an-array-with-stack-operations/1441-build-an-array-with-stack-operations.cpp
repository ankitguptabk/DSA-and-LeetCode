class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        stack<int>s;
        vector<string>str;
        int x=1,i=0;
        while(i<t.size()){
            s.push(x);
            str.push_back("Push");
            if(x!=t[i]){
                s.pop();
                str.push_back("Pop");
            }
            else{
                i++;
            }
            x++;
            if(x>n) break;
        }
        return str;
    }
};