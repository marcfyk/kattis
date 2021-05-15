import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int h = sc.nextInt();
        int v = sc.nextInt();
        int maxH = Math.max(h, n - h);
        int maxV = Math.max(v, n - v);
        System.out.println(maxH * maxV * 4);
        sc.close();
    }
}
