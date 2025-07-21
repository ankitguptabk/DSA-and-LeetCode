class Solution {
public:
    
    int countVowelStrings(int n) {
        //To distribute n identical items into k distinct bins allowing zero items per bin, the number of ways is:    (n+k-1)C(k-1);
        // [ return fact(n+5-1)/(fact(5-1)*fact((n+5-1-(5-1)))); ]

        //   return fact(n+4)/(24*fact(n));
        return ((n+4)*(n+3)*(n+2)*(n+1))/24;
    }
};