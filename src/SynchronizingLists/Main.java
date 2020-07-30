import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n != 0) {
            List<Integer> xs = IntStream.range(0, n)
                .mapToObj(i -> sc.nextInt())
                .collect(Collectors.toList());
            List<Integer> ys = IntStream.range(0, n)
                .mapToObj(i -> sc.nextInt())
                .collect(Collectors.toList());

            List<Integer> sortedXs = xs.stream()
                .sorted()
                .collect(Collectors.toList());
            List<Integer> sortedYs = ys.stream()
                .sorted()
                .collect(Collectors.toList());

            Map<Integer, Integer> map = new HashMap<>();
            IntStream.range(0, n).forEach(i -> map.put(sortedXs.get(i), sortedYs.get(i)));

            xs.stream()
                .map(map::get)
                .forEach(System.out::println);

            System.out.println();

            n = sc.nextInt();
        }
        sc.close();
    }
}

