class Solution {
    public int countDivisor(int num) {
        int count = 0;
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                if (i * i == num) count++;
                else count += 2;
            }
        }
        return count;
    }
    
    public int solution(int left, int right) {
        int answer = 0;
        for (int i = left; i <= right; i++) {
            if (countDivisor(i) % 2 == 0) answer += i;
            else answer -= i;
        }
        
        return answer;
    }
}