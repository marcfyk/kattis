import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int left = sc.nextInt();
        int right = sc.nextInt();

        if (left == 0 && right == 0) {
            System.out.println("Not a moose");
        } else if (left == right) {
            System.out.println("Even " + 2 * left);
        } else {
            System.out.println("Odd " + 2 * Math.max(left, right));
        }

        sc.close();
    }
}

