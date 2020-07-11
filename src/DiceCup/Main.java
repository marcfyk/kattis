import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int[] histogram = new int[N + M + 1];
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= M; ++j) {
                ++histogram[i + j];
            }
        }
        int max = Arrays.stream(histogram).max().orElse(0);
        IntStream.range(0, histogram.length)
            .filter(i -> histogram[i] == max)
            .forEach(System.out::println);
        sc.close();
    }
}

