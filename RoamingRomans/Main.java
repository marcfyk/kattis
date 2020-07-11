import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double X = sc.nextDouble();
        double output = X * 1000 * 5280 / 4854;
        System.out.println(Math.round(output));
        sc.close();
    }
}

