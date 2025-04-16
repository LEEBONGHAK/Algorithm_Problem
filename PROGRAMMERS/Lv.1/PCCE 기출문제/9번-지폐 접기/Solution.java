class Solution {
    public int solution(int[] wallet, int[] bill) {
        int answer = 0;
        int wMax = Math.max(wallet[0], wallet[1]);
        int wMin = Math.min(wallet[0], wallet[1]);
        while (Math.min(bill[0], bill[1]) > wMin || Math.max(bill[0], bill[1]) > wMax) {
            if (bill[0] > bill[1]) bill[0] /= 2;
            else bill[1] /= 2;
            
            answer++;
        }
        return answer;
    }
}