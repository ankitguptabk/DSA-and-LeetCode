class Solution {
public:
    int countDaysTogether(string a, string la, string b, string lb) {
        vector<int>day = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int w=a[1]-'0' + (a[0]-'0')*10;
        int p=a[4]-'0' + (a[3]-'0')*10;
        int x=la[4]-'0' + (la[3]-'0')*10;
        int q=la[1]-'0' + (la[0]-'0')*10;
        int y=b[1]-'0' + (b[0]-'0')*10;
        int r=b[4]-'0' + (b[3]-'0')*10;
        int z=lb[4]-'0' + (lb[3]-'0')*10;
        int s=lb[1]-'0' + (lb[0]-'0')*10;
        int c=max(w,y),d=min(q,s);
        if(c>d) return 0;
        int ans=0;
        for(int i=c;i<=d;i++){
            int e=1,f=day[i-1];
            if(i==c){
                if(w==y) e=max(p,r);
                else if(w==i) e=p;
                else e=r;
            }
            if(i==d){
                if(q==s) f=min(x,z);
                else if(q==i) f=x;
                else f=z;
            }
            if(f>=e){
                ans+=(f-e+1);
            }
        }
        return ans;
    }
};