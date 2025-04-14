class Solution {
    public String solution(String[] cards1, String[] cards2, String[] goal) {
        int idx1 = 0;
        int idx2 = 0;
        boolean flag = false;
        
        for (String str : goal) {
            if (idx1 != cards1.length && str.equals(cards1[idx1])) {
                idx1 += 1;
            } else if (idx2 != cards2.length && str.equals(cards2[idx2])) {
                idx2 += 1;
            } else {
                flag = true;
                break;
            }
        }
        
        if (flag) return "No";
        return "Yes";
    }
}