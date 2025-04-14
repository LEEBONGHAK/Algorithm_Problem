class Solution {
    public String solution(String rny_string) {
        String answer = "";
        String[] arr = rny_string.split("");
        
        for (String str : arr) {
            if (str.equals("m")) answer += "rn";
            else answer += str;
        }
        
        return answer;
    }
}