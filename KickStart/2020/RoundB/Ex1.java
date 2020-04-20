import java.util.*;

public class Ex1 {
    public static void main (String[] args) {
        Scanner input  = new Scanner(System.in);
        int cases = input.nextInt();
        
        for (int i = 0; i < cases; i++) {
            
            int N = input.nextInt();
            ArrayList<Integer> heights = new ArrayList<>();
            int peaks = 0;
            
            for (int a = 0; a < N; a++) {
                int B = input.nextInt();
                heights.add(B);
            }

            for (int a = 0; a < N; a++) {
                if (a == 0 || a == N-1) {
                }
                else {
                    if (heights.get(a)>heights.get(a-1) && heights.get(a)>heights.get(a+1)) {
                        peaks++;
                    }
                }
            }
            
            System.out.println("Case #" + (i+1) + ": " + peaks);
        }
    }
}
