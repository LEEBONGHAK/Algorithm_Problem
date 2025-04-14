class Solution {
    public int[] solution(int[] arr, int n) {
        int len = arr.length;
        int[] ans = new int[len];
        for (int i = 0; i < len; i++) {
            if (len % 2 == 0 && i % 2 == 1) ans[i] = arr[i] + n;
            else if (len % 2 == 1 && i % 2 == 0) ans[i] = arr[i] + n;
            else ans[i] = arr[i];
        }
        return ans;
    }
}