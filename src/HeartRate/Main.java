import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; ++i) {
            double b = sc.nextDouble();
            double p = sc.nextDouble();
            double minAbpm = 60 * b / p - 60 / p;
            double bpm = 60 * b / p;
            double maxAbpm = 60 * b / p + 60 / p;
            System.out.println(minAbpm + " " + bpm + " " + maxAbpm);
        }
        sc.close();
    }
}
