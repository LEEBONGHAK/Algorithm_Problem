class Solution {
    public int solution(String s) {
        int answer = 0;
        int same = 0;
        int diff = 0;
        String[] arr = s.split("");
        String tmp = "";
        for (int i = 0; i < arr.length; i++) {
            if (tmp.equals("")) tmp = arr[i];
            
            if (tmp.equals(arr[i])) same++;
            else diff++;
            
            if (same == diff) {
                answer++;
                tmp = "";
                same = 0;
                diff = 0;
            } else if (i == arr.length - 1) {
                answer++;
            }
        }
        return answer;
    }
}