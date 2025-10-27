class Solution {
public:
    string lexSmallest(string s) {
        string a = s;
        int k = 1;
        int n = s.size();
        while (k<=n) {
            string b = s.substr(0, k);
            string d=b;
            reverse(b.begin(), b.end());
            string c = "";
            if (k < n) c = s.substr(k);
            string e=c;
            reverse(e.begin(),e.end());
            string p = b + c;
            string q=d+e;
            if (!p.empty()) a=min(a, p);
            if(!q.empty()) a=min(a,q);
            k++;
        }
        return a;
    }
};
