import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        int Y = sc.nextInt();
        System.out.println(Y % 2 == 0 ? "possible" : "impossible");
        sc.close();
    }
}

