import java.util.*;
import java.util.stream.Collectors;

class Solution {
    public int[] solution(int N, int[] stages) {
        int[] answer = new int[N];
        LinkedHashMap<Integer, Double> map = new LinkedHashMap<>();
        for (int i = 0; i < N; i++) {
            int stay = 0;
            int trys = 0;
            for (int stage : stages) {
                if (stage >= i + 1) trys++;
                if (stage == i + 1) stay++;
            }
            
            if (trys == 0) map.put(i + 1, (double) 0);
            else map.put(i + 1, ((double) stay / trys) * 100);
        }
        
        LinkedHashMap<Integer, Double> sortedMap = map.entrySet().stream()
            .sorted(Map.Entry.<Integer, Double>comparingByValue(Comparator.reverseOrder()))
            .collect(Collectors.toMap(
                Map.Entry::getKey,
                Map.Entry::getValue,
                (existing, replacement) -> existing,
                LinkedHashMap::new
            ));
        
        int i = 0;
        for (Map.Entry<Integer, Double> entry : sortedMap.entrySet()) {
            answer[i++] = entry.getKey();
        }
        
        return answer;
    }
}