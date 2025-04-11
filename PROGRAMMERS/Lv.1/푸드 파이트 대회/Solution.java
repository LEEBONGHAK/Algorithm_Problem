class Solution {
    public String solution(int[] food) {
        String answer = "";
        for (int i = 1; i < food.length; i++) {            
            for (int j = 0; j < food[i] / 2; j++) {
                answer += i;
            }
        }
        return answer + "0" + new StringBuilder(answer).reverse().toString();
    }
}