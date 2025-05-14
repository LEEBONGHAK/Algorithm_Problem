import java.util.*;

class Solution3 {
    public String solution(int[] date1, int[] date2) {
		// java 9이상 가능
        return Arrays.compare(date1, date2) < 0 ? 1 : 0;
    }
}