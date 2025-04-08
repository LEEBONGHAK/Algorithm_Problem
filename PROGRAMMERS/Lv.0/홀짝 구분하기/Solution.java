import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
			int n = sc.nextInt();
			if (n % 2 == 0) System.out.println(n + " is even");
			else System.out.println(n + " is odd");
		} catch (Exception e) {
			e.printStackTrace();
		}
    }
}