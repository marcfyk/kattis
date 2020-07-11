import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; ++i) {
            int A = sc.nextInt();
            int B = sc.nextInt();
            int C = sc.nextInt();

            int sum = A + B;
            int diff1 = A - B;
            int diff2 = B - A;
            int product = A * B;
            double div1 = ((double) A) / ((double) B);
            double div2 = ((double) B) / ((double) A);

            if (sum == C || diff1 == C || diff2 == C || product == C || div1 == C || div2 == C) {
                System.out.println("Possible");
            } else {
                System.out.println("Impossible");
            }
        }
        sc.close();
    }
}

