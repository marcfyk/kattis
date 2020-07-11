import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; ++i) {
            double v0 = sc.nextDouble();
            double theta = sc.nextDouble();
            double x1 = sc.nextDouble();
            double h1 = sc.nextDouble();
            double h2 = sc.nextDouble();
            double t = x1 / (v0 * Math.cos(theta * Math.PI / 180));
            double y = v0 * t * Math.sin(theta * Math.PI / 180) - 0.5 * 9.81 * Math.pow(t, 2);
            System.out.println(y - 1 > h1 && y + 1 < h2 ? "Safe" : "Not Safe");
        }
        sc.close();
    }
}

