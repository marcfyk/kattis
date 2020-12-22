import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int P = sc.nextInt();
        for (int i = 0; i < P; ++i) {
            int K = sc.nextInt();
            int N = sc.nextInt();
            int candles = N;
            for (int j = 1; j <= N; ++j) {
                candles += j;
            }
            System.out.println(String.format("%d %d", K, candles));
        }
        sc.close();
    }
}

