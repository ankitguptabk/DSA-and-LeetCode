class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int xy=0, yx=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                if(s1[i]=='x' && s2[i]=='y') xy++;
                else if(s1[i]=='y' && s2[i]=='x') yx++;
            }
        }
        if((xy+yx)%2!=0) return -1;
        int ans=0;
        while(xy>=2){
            ans++;
            xy-=2; 
        }
        while(yx>=2){
            ans++;
            yx-=2;
        }
        if(xy==1 && yx==1) ans+=2;
        return ans;
    }
};