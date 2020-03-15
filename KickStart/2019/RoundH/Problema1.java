import java.util.*;

public class Problema1 {
    public static void main (String[] args) {
        Scanner input = new Scanner(System.in);
		int tests = input.nextInt();
		
		ArrayList <Integer> N = new ArrayList<>();
		ArrayList <Integer> A = new ArrayList<>();
		
		for (int i = 0; i < tests; i++) {
		    N.add(input.nextInt());
		    int z = 0;
		    while (z < N.get(i)) {
		        A.add(input.nextInt());
		        z++;
		    }
		}
		
		for (int a = 0; a < tests; a++) {
		    ArrayList <Integer> numbers = new ArrayList<>();
		    System.out.print("Case #" + (a + 1) + ":");
		    int x = 0;
		    
		    for (int i = 1; i <= N.get(a); i++) {
		        for (int y = 1; y <= i; y++) {
		            for (int z = 0; z < i; z++) {
		                if (A.get(z) >= y) {
		                    x++;
		                }
		            }
		            if (x == y) {
		                numbers.add(x);
		            }
		            x = 0;
		        }
		        System.out.print(" " + numbers.get(numbers.size() - 1));
		    }
		    System.out.println();
		    
		    for (int w = 0; w < N.get(a); w++) {
		        A.remove(0);
		    }
		}
    }
}


