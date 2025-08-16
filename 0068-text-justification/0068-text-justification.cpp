class Solution {
public:
    vector<string> fullJustify(vector<string>& w, int k) {
        int c=0,d=0;
        vector<string>ans,x;
        string s="";
        for(int i=0;i<w.size();i++){
            if(d+w[i].size()+c>k){
                int spc=k-d;
                int gap=max(1,c-1);
                int minspc=spc/gap;
                int extra=spc%gap;
                s="";
                for(int j=0;j<c;j++){
                    s+=x[j];
                    if(j<gap){
                        int add=minspc;
                        if(extra>0){
                            add+=1;
                            extra--;
                        }
                        s.append(add,' ');
                    }
                }
                ans.push_back(s);
                x.clear();
                d=0, c=0;
            }
            x.push_back(w[i]);
            d+=w[i].size();
            c++;
        }
        s="";
        for(int j=0;j<x.size();j++){
            if(j) s+=" ";
            s+=x[j];
        }
        s.append(k-s.size(),' ');
        ans.push_back(s);
        return ans;
    }
};