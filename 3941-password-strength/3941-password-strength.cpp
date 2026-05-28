class Solution {
public:
    int passwordStrength(string password) {
        
        int ans=0;
        int n=password.size();

        vector<bool>f(256,false);

        unordered_set<char>x={'!','@','#','$'};

        for(int i=0;i<password.size();i++){

            if(!f[password[i]]){

                f[password[i]]=true;

                if(password[i]>='a' && password[i]<='z'){
                    ans++;
                }
                else if(password[i]>='A' && password[i]<='Z'){
                    ans+=2;
                }
                else if(password[i]>='0' && password[i]<='9'){
                    ans+=3;
                }
                else if(x.count(password[i])){
                    ans+=5;
                }
            }
        }
        return ans;
    }
};