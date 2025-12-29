class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xor_all;
        for(int x:derived){
            xor_all^=x;
        }
        return xor_all==0;
        /* 
        derived[0] = original[0] ⊕ original[1]
        derived[1] = original[1] ⊕ original[2]
        ...........
        derived[n-2] = original[n-2] ⊕ original[n-1]
        derived[n-1] = original[n-1] ⊕ original[0]
        */
    }
};