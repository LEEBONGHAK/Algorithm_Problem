class Solution {
    public int solution(int a, int b, int n) {
        return recursive(a, b, n, 0);
    }

    public int recursive(int a, int b, int n, int result) {
        if (n < a) {
            return result;
        }

        int change = (n / a) * b;

        n = (n % a) + change;

        return recursive(a, b, n, result + change);
    }
}