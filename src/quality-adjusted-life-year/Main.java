import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        double average = 0;
        for (int i = 0; i < N; ++i) {
            double q = sc.nextDouble();
            double y = sc.nextDouble();
            average += (q * y);
        }
        System.out.println(average);
        sc.close();
    }
}
