import java.util.*;

class Solution {
    public int[] solution(String[] name, int[] yearning, String[][] photos) {
        ArrayList<Integer> ans = new ArrayList<>();
        List<String> list = Arrays.asList(name);
        int sum;
        
        for (String[] photo : photos) {
            sum = 0;
            for (String ph : photo) {
                if (list.contains(ph)) {
                    sum += yearning[list.indexOf(ph)];  
                }
            }
            ans.add(sum);
        }
        
        return ans.stream().mapToInt(Integer::intValue).toArray();
    }
}