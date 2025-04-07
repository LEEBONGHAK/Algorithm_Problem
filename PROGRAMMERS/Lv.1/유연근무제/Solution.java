class Solution {
    public int solution(int[] schedules, int[][] timelogs, int startday) {
        int answer = 0;
        boolean flag;
        int tmp;
        int schedule;

        for (int i = 0; i < schedules.length; i++) {
            flag = true;
            tmp = startday;
            schedule = schedules[i] + 10;
            if (schedule % 100 >= 60) {
                schedule += 40;
            }
            
            for (int j = 0; j < 7; j++) {
                if (tmp % 7 == 0 || tmp % 7 == 6) {
                    tmp++;
                    continue;
                }
                
                if (timelogs[i][j] > schedule) {
                    flag = false;
                    break;
                }
                
                tmp++;
            }
            
            if (flag) {
                answer++;
            }
        }
        
        return answer;
    }
}