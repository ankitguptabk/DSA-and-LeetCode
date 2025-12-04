class Solution {
public:
    bool validUtf8(vector<int>& d) {
        int need=0;
        for(int b:d){
            if(need==0){
                if((b>>7)==0b0) continue;
                else if((b>>5)==0b110) need=1;
                else if((b>>4)==0b1110) need=2;
                else if((b>>3)==0b11110) need=3;
                else return false;
            }
            else{
                if((b>>6)!=0b10){
                    return false;
                }
                need--;
            }
        }
        return need==0;
    }
};