class Solution2 {
    public int solution(int[] bandage, int health, int[][] attacks) {
		int cnt = bandage[0]; // 추가 체력 기준
		int curHealth = health; // 현재 체력
		int std = 0; // 마지막으로 공격당한 시간

		int v1, v2; // 체력 회복을 위함
		for (int[] attack : attacks) {
			if (curHealth <= 0) return -1;

			v1 = attack[0] - std - 1;
			v2 = v1 / cnt;
			std = attack[0];

			// 회복에 따른 체력 계산
			curHealth = Math.min(health, curHealth + (v1 * bandage[1]));
			curHealth = Math.min(health, curHealth + (v2 * bandage[2]));
			
			curHealth -= attack[1];
		}

		return curHealth <= 0 ? -1 : curHealth;
    }
}