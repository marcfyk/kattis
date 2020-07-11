import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int I = sc.nextInt();
        int n = (I - 1) * A;
        System.out.println(n + 1);
        sc.close();
    }
}
