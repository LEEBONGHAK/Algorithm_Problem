class Solution {
    public int[] solution(int[] num_list, int n) {
        int[] answer = {};
        int len = num_list.length;
        answer = new int[len - n + 1];
        int idx = 0;
        for (int i = n - 1; i < len; i++) {
            answer[idx++] = num_list[i];
        }
        return answer;
    }
}