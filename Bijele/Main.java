import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] set = new int[]{1, 1, 2, 2, 2, 8};
        for (int i = 0; i < 6; ++i) {
            int n = sc.nextInt();
            System.out.print(set[i] - n);
            if (i < 5) {
                System.out.print(" ");
            }
        }
        System.out.println();
        sc.close();
    }
}
