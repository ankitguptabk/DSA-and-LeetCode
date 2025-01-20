class Solution {
public:
    int numDifferentIntegers(string word) {
        vector<string>a;
        string x="";
        for(int i=0;i<word.size();i++){
            if(word[i]>='a' && word[i]<='z' && !x.empty()){
                a.push_back(x);
                x="";
            }
            else if (word[i] >= '0' && word[i] <= '9'){
                x+=word[i];
            }
        }
        if(!x.empty()) a.push_back(x);
        for(int i=0;i<a.size();i++){
            while(a.size()!=1 && a[i][0]=='0'){
                a[i].erase(a[i].begin());
            }
        }
        int ans=0;
        for(int i=0;i<a.size();i++){
            bool unique=true;
            for(int j=0;j<i;j++){
                if(a[j]==a[i]){
                    unique=false;
                    break;
                }
            }
            if(unique) ans++;
        }
        return ans;
    }
};