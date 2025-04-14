import java.util.*;

class Solutio2 {
    public String[] solution(String my_string) {
        StringTokenizer st = new StringTokenizer(my_string);
        int N = st.countTokens();
		
        String[] result = new String[N];
        for (int n = 0;n < N;n++)
            result[n] = st.nextToken();
        return result;
    }
}