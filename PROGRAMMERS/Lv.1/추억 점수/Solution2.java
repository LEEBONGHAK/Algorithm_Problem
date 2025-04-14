import java.util.*;

class Solution {
    public int[] solution(String[] name, int[] yearning, String[][] photos) {
        int[] ans = new int[photos.length];
        List<String> list = Arrays.asList(name);
        int sum;
        
        for (int i = 0; i < photos.length; i++) {
            sum = 0;
            for (String photo : photos[i]) {
                if (list.contains(photo)) {
                    sum += yearning[list.indexOf(photo)];
                }
            }
            ans[i] = sum;
        }
        
        return ans;
    }
}