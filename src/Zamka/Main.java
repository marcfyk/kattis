import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int L = sc.nextInt();
        int D = sc.nextInt();
        int X = sc.nextInt();
        int N = 0;
        int M = 0;
        boolean findingN = true;
        for (int i = L; i <= D; ++i) {
            if (sumOfDigits(i) == X) {
                if (findingN) {
                    N = i;
                    findingN = false;
                }
                M = i;
            }
        }
        System.out.println(N);
        System.out.println(M);
        sc.close();
    }

    private static int sumOfDigits(int n) {
        int sum = 0;
        int number = n;
        while (number != 0) {
            sum += (number % 10);
            number /= 10;
        }
        return sum;
    }
}
