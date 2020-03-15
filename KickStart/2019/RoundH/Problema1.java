
import java.util.*;

public class Problema1 {
    public static void main (String[] args) {
        
        long startTime = System.nanoTime();
        
        Scanner input = new Scanner(System.in);
		int tests = input.nextInt();
		
		ArrayList <Integer> index = new ArrayList<>();
		ArrayList <Integer> citations = new ArrayList<>();
		
		for (int a = 0; a < tests; a++) {
		    int papers = input.nextInt();
		    citations.add(papers);
		    ArrayList <Integer> numbers = new ArrayList<>();
		    int z = 0;
		    int h = 0;
		    while (z < papers) {
		        numbers.add(input.nextInt());
		        z++;
		    }
		    for (int i = 1; i <= papers; i++) {
		        for (int y = 1; y <= i; y++) {
		            for (int b = 0; b < i; b++) {
		                if (numbers.get(b) >= y) {
		                    h++;
		                }
		            }
		            if (h == y) {
		                numbers.add(h);
		            }
		            h = 0;
		        }
		        index.add(numbers.get(numbers.size() - 1));
		    }
		}
		
		for (int i = 1; i <= tests; i++) {
		    System.out.print("Case #" + i +":");
		    for (int x = 0; x < citations.get(i - 1); x++) {
		        System.out.print(" " + index.get(0));
		        index.remove(0);
		    }
		    System.out.println();
		}
		long endTime = System.nanoTime();
		
		System.out.println("That took " + (endTime - startTime)/1000000 + " milliseconds");
    }
    
}
