class Solution {
public:
    double angleClock(int h, int m) {
        if(h==12) h=0;
        double x=static_cast<double>(m)/5.0;
        double dif=h-x;
        if(dif>6) dif-=12;
        else if(dif<-6) dif+=12;
        double y=abs(dif)*30.0;
        
        if(dif>0) y+=static_cast<double>(m)/2.0;
        else y-=static_cast<double>(m)/2.0;
        y=abs(y);
        y=min(y,360.0-y);
        return y;
    }
};