import java.util.*;

class Solution {
    public String solution(String[] participant, String[] completion) {
        HashMap<String, Integer> hashMap = new HashMap<>();
        for (String name: participant) {
            if (hashMap.containsKey(name)) {
                hashMap.put(name, hashMap.get(name) + 1);
            } else {
                hashMap.put(name, 1);
            }
        }
        
        for (String name: completion) {
            hashMap.put(name, hashMap.get(name) - 1);
        }
        
        String res = "";
        for (Map.Entry<String, Integer> entry : hashMap.entrySet()) {
            String key = entry.getKey();
            Integer value = entry.getValue();
            if (value == 1) {
                res = key;
                break;
            }
        } 
        
        return res;
    }
}