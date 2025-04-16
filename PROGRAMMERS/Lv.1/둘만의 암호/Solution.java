import java.util.*;

class Solution {
    public String solution(String s, String skip, int index) {
        String alpha = "abcdefghijklmnopqrstuvwxyz";    
        ArrayList<Character> alphaList = new ArrayList<>();
        for (char a : alpha.toCharArray()) alphaList.add(a);
        for (char sk : skip.toCharArray()) alphaList.remove(Character.valueOf(sk));

        char[] arr = s.toCharArray();
        for (int i = 0; i < arr.length; i++) {
            int pos = alphaList.indexOf(arr[i]);
            if (pos == -1) {
                continue;
            }

           int newPos = (pos + index) % alphaList.size();
            arr[i] = alphaList.get(newPos);
        }

        return String.valueOf(arr);
    }
}