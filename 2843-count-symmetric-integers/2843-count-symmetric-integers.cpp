class Solution {
public:
    int countSymmetricIntegers(int l, int h) {
        int ans=0;
        for(int i=l;i<=h;i++){
            string s=to_string(i);
            if(s.size() %2==0){
                int half=s.size()/2;
                int c=0,d=0;
                for(int j=0;j<half;j++){
                    c+=s[j]-'0';
                    d+=s[j+half]-'0';
                }
                if(c==d) ans++;
            }
        }
        return ans;
    }
};