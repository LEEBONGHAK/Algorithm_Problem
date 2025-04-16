class Solution {
    public int[] solution(String[] keymap, String[] targets) {
        int[] answer = {};
        int len = targets.length;
        answer = new int[len];
        int sum, tmp;
        for (int i = 0; i < len; i++) {
            sum = 0;
            String[] arr = targets[i].split("");
            for (String str : arr) {
                tmp = 1000;
                for (String key: keymap) {
                    if (key.indexOf(str) == -1) continue;
                    tmp = Math.min(tmp, key.indexOf(str));
                    if (tmp == 0) break;
                }
                
                if (tmp == 1000) {
                    sum = -1;
                    break;
                }
                else sum += tmp + 1;
            }
            answer[i] = sum;
        }
        return answer;
    }
}