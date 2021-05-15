import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        String B = sc.next();

        int reverseA = 0;
        int reverseB = 0;

        for (int i = 0; i < 3; ++i) {
            int m = (int) Math.pow(10, i);
            int digitA = Integer.parseInt(String.valueOf(A.charAt(i)));
            int digitB = Integer.parseInt(String.valueOf(B.charAt(i)));
            reverseA += digitA * m;
            reverseB += digitB * m;
        }

        System.out.println(reverseA > reverseB ? reverseA : reverseB);
        sc.close();
    }
}

