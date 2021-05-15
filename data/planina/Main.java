import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int output = 2;
        for (int i = 0; i < N; ++i) {
            output += (output - 1);
        }
        System.out.println((int) Math.pow(output, 2));
        sc.close();
    }
}
