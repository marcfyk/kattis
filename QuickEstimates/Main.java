import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; ++i) {
            String c = sc.next();
            System.out.println(c.length());
        }
        sc.close();
    }

}

