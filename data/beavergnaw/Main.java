import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int D = sc.nextInt();
        int V = sc.nextInt();
        while (D != 0 && V != 0) {
            double max = Math.pow(D * 0.5, 2) * D * Math.PI;
            double r = Math.cbrt((max - 1.5 * V) / (2 * Math.PI));
            double d = r * 2;
            System.out.println(d);
            D = sc.nextInt();
            V = sc.nextInt();
        }
        sc.close();
    }
}

