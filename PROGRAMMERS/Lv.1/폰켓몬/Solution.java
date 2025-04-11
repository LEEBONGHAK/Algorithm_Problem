import java.util.*;

class Solution {
    public int solution(int[] nums) {
        HashSet<Integer> hashSet = new HashSet<>();
        for (int num : nums) {
            hashSet.add(num);
        }
        
        if (hashSet.size() < nums.length / 2) {
            return hashSet.size();
        } else {
            return nums.length / 2;
        }
    }
}