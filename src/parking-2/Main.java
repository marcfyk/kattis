import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; ++i) {
            int n = sc.nextInt();
            int max = Integer.MIN_VALUE;
            int min = Integer.MAX_VALUE;
            for (int j = 0; j < n; ++j) {
                int x = sc.nextInt();
                min = Math.min(min, x);
                max = Math.max(max, x);
            }
            System.out.println(2 * (max - min));
        }
        sc.close();
    }
}

