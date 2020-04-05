import java.util.*;

public class Main {
    public static void main (String[] args) {
        Scanner input  = new Scanner(System.in);
        int cases = input.nextInt();
        
        for (int i = 0; i < cases; i++) {
            int N = input.nextInt();
            int B = input.nextInt();
            ArrayList<Integer> prices = new ArrayList<>();
            int result = 0;
            int y = 0;
            
            for (int x = 0; x < N; x++) {
                prices.add(input.nextInt());
            }
            
            Collections.sort(prices);
            
            for (int x = 0; x < N; x++) {
                if ((y + prices.get(x)) <= B) {
                    y += prices.get(x);
                    result++;
                }
                else {
                    break;
                }
            }
            
            System.out.println("Case #" + (i+1) + ": " + result);
        }
    }
}