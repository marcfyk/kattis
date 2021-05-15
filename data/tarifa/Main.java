import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int N = sc.nextInt();
        int output = X * (N + 1);
        for (int i = 0; i < N; ++i) {
            int P = sc.nextInt();
            output -= P;
        }
        System.out.println(output);
        sc.close();
    }
}
