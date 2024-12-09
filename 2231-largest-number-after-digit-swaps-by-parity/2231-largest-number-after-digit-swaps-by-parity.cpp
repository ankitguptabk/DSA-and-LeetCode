class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        vector<int>x,y;
        while(num>0){
            int z=num%10;
            if(z%2==0) x.push_back(z);
            else y.push_back(z);
            num/=10;
        }
        sort(x.begin(),x.end(),greater<int>());
        sort(y.begin(),y.end(),greater<int>());
        string ans="";
        int eind=0,oind=0;
        for(int i=0;i<s.size();i++){
            if(s[i]%2==0){
                ans+=to_string(x[eind]);
                eind++;
            }
            else{
                ans+=to_string(y[oind]);
                oind++;
            }
        }
        int answ=stoi(ans);
        return answ;
    }
};