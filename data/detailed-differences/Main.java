import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; ++i) {
            String x = sc.next();
            String y = sc.next();
            int length = x.length();
            StringBuilder stringBuilder = new StringBuilder();
            for (int j = 0; j < length; ++j) {
                if (x.charAt(j) == y.charAt(j)) {
                    stringBuilder.append(".");
                } else {
                    stringBuilder.append("*");
                }
            }
            System.out.println(x);
            System.out.println(y);
            System.out.println(stringBuilder.toString());
            System.out.println();
        }
        sc.close();
    }
}

