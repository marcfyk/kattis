import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; ++i) {
            List<Integer> xs = new ArrayList<>();
            int next = sc.nextInt();
            while (next != 0) {
                xs.add(next);
                next = sc.nextInt();
            }

            int n = 0;
            int prev = xs.get(0);
            for (int j = 1; j < xs.size(); ++j) {
                int curr = xs.get(j);
                n += Math.max(curr - (2 * prev), 0);
                prev = curr;
            }
            System.out.println(n);
        }
        sc.close();
    }
}

