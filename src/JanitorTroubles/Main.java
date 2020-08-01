import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int s1 = sc.nextInt();
        int s2 = sc.nextInt();
        int s3 = sc.nextInt();
        int s4 = sc.nextInt();


        double semiperimeter = 0.5 * IntStream.of(s1, s2, s3, s4).sum();

        double maxArea = Math.sqrt(IntStream.of(s1, s2, s3, s4).mapToDouble(s -> semiperimeter - s).reduce(1, (x, y) -> x * y));

        System.out.println(maxArea);

        sc.close();
    }
}

