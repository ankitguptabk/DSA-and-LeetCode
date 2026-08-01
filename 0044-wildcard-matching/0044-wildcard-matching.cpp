class Solution {
public:
    bool isMatch(string s, string p) {
        int n = p.size(), m = s.size();
        int i=0, j=0;

        int star =-1;
        int temp =-1;

        while (j < m) {
            if (i < n && p[i] != '*' && p[i] != '?') {

                if (p[i] == s[j]) {
                    i++;
                    j++;
                }
                else {
                    if (star == -1)
                        return false;

                    i = star + 1;
                    temp++;
                    j = temp;
                }
            }

            else if (i < n && p[i] == '?') {
                i++;
                j++;
            }

            else if (i < n && p[i] == '*') {

                star = i;
                temp = j;
                i++;
            }

            else {
                if (star == -1)
                    return false;

                i = star + 1;
                temp++;
                j = temp;
            }
        }

        while (i < n && p[i] == '*') {
            i++;
        }

        return i == n;
    }
};