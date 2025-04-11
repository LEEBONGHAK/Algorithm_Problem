class Solution {
    public int solution(int n, int m, int[] section) {
        int max = 0;
        int ans = 0;
        
        for (int sec : section) {
            if (max <= sec) {
                max = sec + m;
                ans++;
            }
        }
        
        return ans;
    }
}