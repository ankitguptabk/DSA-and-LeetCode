class Solution {
public:
    int compress(vector<char>& ch) {
        for (int i=0;i<ch.size();i++){
            int j=i+1,c=1;
            char x=ch[i];
            while(j<ch.size() && ch[j]==x){
                c++;
                j++;
            }
            if(c>1){
                ch.erase(ch.begin()+i+1,ch.begin()+j);
                string s=to_string(c);
                ch.insert(ch.begin()+i+1,s.begin(),s.end());
                i+=s.size();
            }
        }
        return ch.size();
    }
};