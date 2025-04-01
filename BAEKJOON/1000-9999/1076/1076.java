import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		Map<String, Map<String, Integer>> dataMap = Map.of(
			"black", Map.of("value", 0, "product", 1),
			"brown", Map.of("value", 1, "product", 10),
			"red", Map.of("value", 2, "product", 100),
			"orange", Map.of("value", 3, "product", 1000),
			"yellow", Map.of("value", 4, "product", 10000),
			"green", Map.of("value", 5, "product", 100000),
			"blue", Map.of("value", 6, "product", 1000000),
			"violet", Map.of("value", 7, "product", 10000000),
			"grey", Map.of("value", 8, "product", 100000000),
			"white", Map.of("value", 9, "product", 1000000000)
		);
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		long res = dataMap.get(br.readLine()).get("value");
		res = res * 10 + dataMap.get(br.readLine()).get("value");
		res = res * dataMap.get(br.readLine()).get("product");
		
		System.out.println(res);
	}
}