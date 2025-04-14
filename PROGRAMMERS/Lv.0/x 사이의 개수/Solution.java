import java.util.Arrays;

class Solution {
    public int[] solution(String myString) {
        int[] answer = {};
        String[] arr = myString.split("x");
        int len = myString.endsWith("x") ? arr.length + 1 : arr.length;
        answer = new int[len];
        Arrays.fill(answer, 0);
        
        for (int i = 0 ; i < arr.length; i++) {
            answer[i] = arr[i].length();
        }
        return answer;
    }
}