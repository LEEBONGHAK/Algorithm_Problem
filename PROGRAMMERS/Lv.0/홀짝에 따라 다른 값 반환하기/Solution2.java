class Solution2 {
    public int solution(int n) {
		// 수학 공식으로의 해결 방법
		// 시그마(1 -> n/2) (2k)^2
		if (n % 2 == 0) return 4 * n / 2 * (n / 2 + 1) * (n + 1) / 6;

		// 시그마(1 -> (n+1)/2) (2k - 1)
		return (n + 1) * (n + 1) / 4;
    }
}