import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        String output = null;

        if (a + b == c) {
            output = format(a, b, c, '+', '=');
        } else if (a - b == c) {
            output = format(a, b, c, '-', '=');
        } else if (a * b == c) {
            output = format(a, b, c, '*', '=');
        } else if (a / b == c) {
            output = format(a, b, c, '/', '=');
        } else if (a == b + c) {
            output = format(a, b, c, '=', '+');
        } else if (a == b - c) {
            output = format(a, b, c, '=', '-');
        } else if (a == b * c) {
            output = format(a, b, c, '=', '*');
        } else if (a == b / c) {
            output = format(a, b, c, '=', '/');
        }

        System.out.println(output);

        sc.close();
    }

    private static String format(int a, int b, int c, char opOne, char opTwo) {
        return String.format("%d%c%d%c%d", a, opOne, b, opTwo, c);
    }
}

