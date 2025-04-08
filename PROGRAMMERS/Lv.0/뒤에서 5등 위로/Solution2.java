import java.util.stream.IntStream;

class Solution2 {
    public int[] solution(int[] num_list) {
        
        return IntStream.or(num_list).sorted().skip(5).toArray();
    }
}