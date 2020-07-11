import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] c = sc.nextLine().split("");
        int n = c.length / 3;
        StringBuilder stringBuilder = new StringBuilder();
        for (int i = 0; i < n; ++i) {
            String x = c[i];
            String y = c[n + i];
            String z = c[2 * n + i];
            if (x.equals(y) || x.equals(z)) {
                stringBuilder.append(x);
            } else if (y.equals(z)) {
                stringBuilder.append(y);
            }
        }

        System.out.println(stringBuilder.toString());

        sc.close();
    }
}
