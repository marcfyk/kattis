import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Set<Integer> xs = new HashSet<>();
        Set<Integer> ys = new HashSet<>();
        for (int i = 0; i < 3; ++i) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            if (xs.contains(x)) {
                xs.remove(x);
            } else {
                xs.add(x);
            }
            if (ys.contains(y)) {
                ys.remove(y);
            } else {
                ys.add(y);
            }
        }

        int x4 = 0;
        int y4 = 0;

        for (Integer i : xs) {
            x4 = i;
        }
        for (Integer i : ys) {
            y4 = i;
        }

        System.out.println(x4 + " " + y4);

        sc.close();
    }
}
