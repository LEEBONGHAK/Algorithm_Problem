import java.util.*;
import java.io.*;
import java.lang.Math;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        double T = Double.parseDouble(br.readLine());
        double[] arr = new double[6];
		double dis, sum, diff;
		StringTokenizer tmp;
		
        for (int i = 0; i < T; i++) {
            tmp = new StringTokenizer(br.readLine()," ");
            for (int j = 0; j< 6; j++) {
                arr[j] = Double.parseDouble(tmp.nextToken());
            }
            
            dis = Math.pow(arr[0] - arr[3], 2) + Math.pow(arr[1] - arr[4], 2);
			sum = Math.pow(arr[2] + arr[5], 2);
			diff = Math.pow(arr[2] - arr[5], 2);
			
			if (arr[0] == arr[3] && arr[1] == arr[4] && arr[2] == arr[5]) {
				System.out.println(-1);
			} else if (sum < dis || dis < diff) {
				System.out.println(0);
			} else if (sum == dis || dis == diff) {
				System.out.println(1);
			} else {
				System.out.println(2);
			}
        }
    }
}