class Solution {
    public int solution(String[] babbling) {
        int answer = 0;
        String[] arr = { "aya", "ye", "woo", "ma" };
        int tmp, idx;
        boolean flag;
        
        for (String str : babbling) {
            tmp = 0;
            for (String a : arr) {
                idx = 0;
                flag = false;
                while ((idx = str.indexOf(a, idx)) != -1) {
                    if (
						str.indexOf(a, idx + a.length()) != -1 && 
						str.indexOf(a, idx + a.length()) - idx == a.length()
					) {
                        flag = true;
                        break;
                    }

                    tmp += a.length();
                    idx += a.length();
                }
                
                if (flag) break;
            }
            
            if (tmp == str.length()) answer++;
        }
        
        return answer;
    }
}