import java.util.*;

class Solution {
    public String[] solution(String[] strArr) {        
        ArrayList<String> answer = new ArrayList<>();
        for (String str : strArr) {
            if (str.indexOf("ad") != -1) continue;
            answer.add(str);
        }
        
        return answer.toArray(new String[0]);
    }
}