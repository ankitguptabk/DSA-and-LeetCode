class Solution {
public:
    int maxBottlesDrunk(int b, int e) {
        int ans=b;
        while(b>=e){
            if(b-e>=0){
                b-=e;
                ans++;
                b++;
                e++;
            }
        }
        return ans;
    }
};