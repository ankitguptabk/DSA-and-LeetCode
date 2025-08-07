class Solution {
public:
    int compareVersion(string x, string y) {
        int a=0,b=0;
        int i=0,j=0;
        while(i<x.size() || j<y.size()){
            int r=0,s=0;
            while(i<x.size() && x[i]!='.'){
                r=(x[i]-'0')+r*10;
                i++;
            }
            while(j<y.size() && y[j]!='.' ){
                s=(y[j]-'0')+s*10;
                j++;
            }
            if(r<s) return -1;
            else if(r>s) return 1;
            else{
                i++;
                j++;
            }
        }
        return 0;
    }
};