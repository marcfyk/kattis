import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int S = sc.nextInt();
        int limit = (S % 2 == 0) ? S / 2 + 1 : S / 2 + 2;
        List<int[]> pairs = new ArrayList<>();
        for (int i = 2; i < limit; ++i) {
            int r = S % (i * 2 - 1);
            if (r == 0 || r == i) {
                pairs.add(new int[]{i, i - 1});
            }
            if (S % i == 0) {
                pairs.add(new int[]{i, i});
            }
        }

        System.out.println(S + ":");
        pairs.stream()
            .map(x -> String.format("%d,%d", x[0], x[1]))
            .forEach(System.out::println);

        sc.close();
    }
}

