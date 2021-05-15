import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        int D = sc.nextInt();

        int max = IntStream.of(A, B, C, D)
            .sorted()
            .limit(3)
            .max()
            .orElse(Integer.MIN_VALUE);

        int min = IntStream.of(A, B, C, D)
            .sorted()
            .min()
            .orElse(Integer.MAX_VALUE);

        System.out.println(max * min);

        sc.close();
    }
}

