class Solution {
public:
    string reformatNumber(string number) {
        string original="";
        for(char ch:number){
            if(ch>='0' && ch<='9'){
                original+=ch;
            }
        }
        int n=original.size();
        if(n<=3) return original;
        string ans="", curr="";
        int c=0;
        string a="";
        bool four=false;
        if(n%3==1){
            a+=original.substr(n-4,4);
            four=true;
        }
        for(int i=0;i<n;i++){
            if(four && i==n-4) break;
            curr+=original[i];
            c++;
            if(c==3){
                ans+=curr+"-";
                curr="";
                c=0;
            }
        }
        if(curr.size()>0) {
            ans+=curr;
            curr="";
        }
        if(four){
            if(ans.size()>0 && ans.back()!='-') ans+="-";
            ans+=a.substr(0,2)+"-"+a.substr(2,2);
        }
        else{
            if(ans.size()>0 && ans.back()=='-') ans.pop_back();
        }
        return ans;
    }
};