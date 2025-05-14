import java.time.LocalDate;

class Solution2 {
    public String solution(int[] date1, int[] date2) {
		LocalDate dateA = LocalDate.of(date1[0], date1[1], date1[2]);
		LocalDate dateB = LocalDate.of(date2[0], date2[1], date2[2]);

		if (dateA.isBefore(dateB)) return 1;
		return 0;
    }
}