import java.util.*;

class Solution {
    public int getScore(int[] answers, int[] pattern) {
        int score = 0;
        int pLen = pattern.length;
        int idx = 0;
        
        for (int i = 0; i < answers.length; i++) {
            if (idx == pLen) idx = 0;
            if (answers[i] == pattern[idx]) score += 1;
            idx += 1;
        }
        
        return score;
    }

    public int[] solution(int[] answers) {
        ArrayList<Integer> ans = new ArrayList<>();
        int[] a_pa = { 1, 2, 3, 4, 5 };
        int[] b_pa = { 2, 1, 2, 3, 2, 4, 2, 5 };
        int[] c_pa = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
        
        int[] tmp = { getScore(answers, a_pa), getScore(answers, b_pa), getScore(answers, c_pa) };
        int maxValue = Math.max(tmp[0], Math.max(tmp[1], tmp[2]));
        for (int i = 0; i < 3; i++) {
            if (tmp[i] == maxValue) ans.add(i + 1);
        }
        
        return ans.stream().mapToInt(Integer::intValue).toArray();
    }
}