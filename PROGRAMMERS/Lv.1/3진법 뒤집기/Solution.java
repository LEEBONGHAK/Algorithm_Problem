class Solution {
    public int solution(int n) {
        String tmp = Integer.toString(n, 3);
        String reversed = new StringBuilder(tmp).reverse().toString();
        
        return Integer.parseInt(reversed, 3);
    }
}