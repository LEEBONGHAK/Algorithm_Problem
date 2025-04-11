class Solution2 {
    public String solution(int[] food) {
        String answer = "0";
        for (int i = 1; i < food.length; i++) {            
            for (int j = 0; j < food[i] / 2; j++) {
                answer = i + answer + i;
            }
        }
        return answer;
    }
}