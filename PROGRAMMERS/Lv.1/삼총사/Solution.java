class Solution {
    static int answer=0;
    
    public void dfs(int[] arr, boolean[] visited, int len, int start, int depth) {
        if (depth == 3) {
            int tmp = 0;
            for (int i = 0; i < len; i++) {
                if (visited[i]) tmp += arr[i];
            }
            if (tmp == 0) answer++;
            return ;
        }
        
        for (int i = start; i < len; i++) {
            if (!visited[i]) {
                visited[i] = true;
                dfs(arr, visited, len, i + 1, depth + 1);
                visited[i] = false;
            }
        }        
        return ;
    }
    
    public int solution(int[] number) {
        dfs(number, new boolean[number.length], number.length, 0, 0);
        return answer;
    }
}