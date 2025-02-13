class Solution {
public:
    int minLength(string s) {
        for(int i=0;i<s.size();i++){
            if(i+1<s.size() && s[i]=='A' && s[i+1]=='B'){
                s.erase(i,2);
                i-=2;
                if(i<-1) i=-1;
            }
            else if(i>0 && s[i-1]=='A' && s[i]=='B'){
                s.erase(i-1,2);
                i-=2;
                if(i<-1) i=-1;
            }
            if((i<s.size()-1 && s[i]=='C' && s[i+1]=='D' )){
                s.erase(i,2);
                i-=2;
                if(i<-1) i=-1;
            }
            else if(i>0 && s[i-1]=='C' && s[i]=='D'){
                s.erase(i-1,2);
                i-=2;
                if(i<-1) i=-1;
            }
        }
        return s.size();
    }
};