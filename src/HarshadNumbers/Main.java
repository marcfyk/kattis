import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n % sumOfDigits(n) != 0) {
            ++n;
        }
        System.out.println(n);
        sc.close();
    }

    private static int sumOfDigits(int number) {
        int n = number;
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
}

