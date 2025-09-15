class Solution {
public:
    vector<vector<int>> generateSchedule(int n) {
        if(n<=4) return {};
        int s=n*(n-1);
        vector<vector<int>> r;
        unordered_set<string> v;
        int a=0,b=1;
        string k=to_string(a)+','+to_string(b);
        while(r.size()!=s){
            int d=abs(b-a);
            while(!v.count(k)){
                v.insert(k);
                vector<int> m(2);
                m[0]=a;
                m[1]=b;
                r.push_back(m);
                if(d==1){
                    a=(a+2)%n;
                    b=(b+2)%n;
                }else{
                    a=(a+1)%n;
                    b=(b+1)%n;
                }
                k=to_string(a)+','+to_string(b);
            }
            while(
                v.count(k)||
                a==r.back()[0]||
                a==r.back()[1]||
                b==r.back()[0]||
                b==r.back()[1]||
                a==b
            ){
                b++;
                if(b % n==0){
                    b=0;
                    a++;
                }
                k=to_string(a)+','+to_string(b);
            }
        }
        return r;
    }
};