import java.util.*;

class Solution {
    public int[] solution(String s) {
        int[] ans = new int[s.length()];
        Arrays.fill(ans, -1);
        
        for (int i = s.length() - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                if (s.charAt(i) == s.charAt(j)) {
                    ans[i] = i - j;
                }
            }
        }
        
        return ans;
    }
}