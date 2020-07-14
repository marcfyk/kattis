import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int d = sc.nextInt();
        while (n != 0 && d != 0) {
            int m = n / d;
            int r = n % d;
            System.out.println(String.format("%d %d / %d", m, r, d));
            n = sc.nextInt();
            d = sc.nextInt();
        }
        sc.close();
    }
}

