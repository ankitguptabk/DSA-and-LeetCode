class Solution {
public:
    vector<int> memLeak(int a, int b) {
        int x=1;
        while(a-x>=0 || b-x>=0){
            if(a>=b){
                a-=x;
            }
            else if(b>a){
                b-=x;
            }
            x++;
        }
        return {x,a,b};
    }
};