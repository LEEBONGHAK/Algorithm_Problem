import java.util.*;

class Solution {
    public int[] solution(int[] arr, int[] delete_list) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int num : arr) {
            if (Arrays.stream(delete_list).anyMatch(i -> i == num)) continue;
            
            list.add(num);
        }
        
        return list.stream().mapToInt(Integer::intValue).toArray();
    }
}