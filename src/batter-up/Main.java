import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double denominator = 0;
        double numerator = 0;
        for (int i = 0; i < n; ++i) {
            int base = sc.nextInt();
            if (base != -1) {
                numerator += base;
                ++denominator;
            }
        }
        System.out.println(numerator / denominator);
        sc.close();
    }
}
