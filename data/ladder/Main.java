import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double h = sc.nextDouble();
        double v = sc.nextDouble();
        double l = h / Math.sin(v * Math.PI / 180);
        System.out.println((int) Math.ceil(l));
        sc.close();
    }
}
