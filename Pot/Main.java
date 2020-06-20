import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int answer = 0;
        for (int i = 0; i < N; ++i) {
            String P = sc.next();
            int length = P.length();
            int e = Integer.parseInt(P.substring(length - 1, length));
            int b = Integer.parseInt(P.substring(0, length - 1));
            answer += Math.pow(b, e);
        }
        System.out.println(answer);
        sc.close();
    }
}
