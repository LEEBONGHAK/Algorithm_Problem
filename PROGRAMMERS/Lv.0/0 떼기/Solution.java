class Solution {
    public String solution(String n_str) {
        int idx = 0;
        for (int i = 0; i < n_str.length(); i++) {
            if (n_str.charAt(i) == '0') continue;
            else {
                idx = i;
                break;
            }
        }
        return n_str.substring(idx);
    }
}