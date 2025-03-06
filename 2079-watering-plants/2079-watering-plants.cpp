class Solution {
public:
    int wateringPlants(vector<int>& p, int c) {
        int t=0;
        int x=c;
        for(int i=0;i<p.size();i++){
            if(c>=p[i]){
                t++;
                c-=p[i];
            }
            else{
                t+=2*i+1;
                c=x;
                c-=p[i];
            }
        }
        return t;
    }
};