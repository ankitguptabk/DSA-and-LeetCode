class Solution {
    public int maxProfit(int[] p) {
        int ans = 0;
        int min = p[0];
        for (int i = 1; i < p.length; i++) {
            if (p[i] < min) {
                min = p[i];
            } else {
                ans = Math.max(ans,p[i] - min);
            }
        }
        return ans;
    }
}
