import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        double areaNormal = Math.PI * Math.pow(r, 2);
        double areaTaxicab = Math.pow(r, 2) * 2;
        System.out.println(areaNormal);
        System.out.println(areaTaxicab);
        sc.close();
    }
}

