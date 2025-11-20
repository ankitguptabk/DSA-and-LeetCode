/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>>ans;
        int x=1,y=z;
        while(x<=z && y>=1){
            int val=customfunction.f(x,y);
            if(val==z){
                ans.push_back({x,y});
                x++;
                y--;
            }
            else if(val<z){
                x++;
            }
            else{
                y--;
            }
        }
        return ans;
    }
};