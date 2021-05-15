import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] k = new int[N];

        for (int i = 0; i < N; ++i) {
            k[i] = sc.nextInt();
        }

        int sum = IntStream.of(k)
            .filter(i -> i < 0)
            .map(Math::abs)
            .sum();

        System.out.println(sum);

        sc.close();
    }
}

