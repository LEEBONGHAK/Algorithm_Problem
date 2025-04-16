class Solution {
    public int solution(int[] bandage, int health, int[][] attacks) {
        int curHealth = health;
        int time = attacks[attacks.length - 1][0];
        int idx = 0, t = 0;
        for (int i = 0; i <= time; i++) {
            if (i == attacks[idx][0]) {
                curHealth -= attacks[idx++][1];
                if (curHealth <= 0) return -1;
                t = 0;
            } else {
                t++;
                curHealth += bandage[1];
                if (t == bandage[0]) {
                    curHealth += bandage[2];
                    t = 0;
                }

                if (curHealth > health) curHealth = health;
            }
        }        
        return curHealth;
    }
}