/**
 * URI
 * Problem Id : 2252
 * Problem Name: Descobrindo Senha
 */

import java.io.IOException;
import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		in.useLocale(Locale.US);
		
		int n, c = 1;
		
		while (in.hasNext()) {
			n = in.nextInt();
			
			ArrayList<Double> nums = new ArrayList<>();
			HashMap<Double, List<Integer>> numMap = new HashMap<>();
			
			for (int i = 0; i < 10; i++) {
				double num = in.nextDouble();

				if (!nums.contains(num)) {
					nums.add(num);
				}				
				
				List<Integer> list = numMap.get(num);

				if (numMap.get(num) == null) {
					list = new ArrayList<>();
				}
				
				list.add(i);
				numMap.put(num, list);
			}
			
			Collections.sort(nums, Collections.reverseOrder());;
			
			System.out.print("Caso " + c++ + ": ");
			for (int i = 0; i < n; i++) {
				double num = nums.get(i);

				List<Integer> list = numMap.get(num);
				Collections.sort(list);
				
				n -= list.size() - 1;

				for (Integer numb : list) {
					System.out.print(numb);
				}				
			}
			System.out.println();
		}
		
		in.close();
	}

}
