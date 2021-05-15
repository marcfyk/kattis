import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int P = sc.nextInt();
        for (int i = 0; i < P; ++i) {
            int K = sc.nextInt();
            int b = sc.nextInt();
            int n = sc.nextInt();
            List<Integer> digits = getDigits(n, b);
            int sum = (int) digits.stream()
                .map(d -> d * d)
                .reduce(0, (x, y) -> x + y);
            System.out.println(K + " " + sum);
        }
        sc.close();
    }

    private static List<Integer> getDigits(int number, int base) {
        List<Integer> digits = new ArrayList<>();
        int n = number;
        while (n != 0) {
            digits.add(n % base);    
            n /= base;
        }
        return digits;
    }
}
