import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int W = sc.nextInt();
        int H = sc.nextInt();
        double limit = Math.pow(Math.pow(W, 2) + Math.pow(H, 2), 0.5);
        for (int i = 0; i < N; ++i) {
            int length = sc.nextInt();
            System.out.println(length <= limit ? "DA" : "NE");
        }
        sc.close();
    }
}
