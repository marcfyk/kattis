import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0;
        for (int i = 0; i < n; ++i) {
            int t = sc.nextInt();
            if (t < 0) {
                ++count;
            }
        }
        System.out.println(count);
        sc.close();
    }
}
