import java.util.*;

class Solution {
    public int solution(int[][] sizes) {
        ArrayList<Integer> maxList = new ArrayList<>();
        ArrayList<Integer> minList = new ArrayList<>();
        
        for (int[] size : sizes) {
            maxList.add(Math.max(size[0], size[1]));
            minList.add(Math.min(size[0], size[1]));
        }
        
        maxList.sort(Comparator.naturalOrder());
        minList.sort(Comparator.naturalOrder());
        
        return maxList.get(maxList.size() - 1) * minList.get(minList.size() - 1);
    }
}