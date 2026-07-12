class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        int ans=0;
        string x=s.substr(0,2), y=s.substr(3,2), z=s.substr(6,2);
        string p=e.substr(0,2), q=e.substr(3,2), r=e.substr(6,2);
        int a=stoi(x), b=stoi(y), c=stoi(z);
        int d=stoi(p), ee=stoi(q), f=stoi(r);
        ans=(d*60*60+ee*60+f)-(a*60*60+b*60+c);
        return ans;
    }
};