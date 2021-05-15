import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double C = sc.nextDouble();
        int L = sc.nextInt();
        double area = 0;
        for (int i = 0; i < L; ++i) {
            double width = sc.nextDouble();
            double length = sc.nextDouble();
            area += (width * length);
        }
        double cost = C * area;
        System.out.println(cost);
        sc.close();
    }
}
