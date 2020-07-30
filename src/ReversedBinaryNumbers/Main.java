import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String binaryRep = Integer.toBinaryString(N);
        String reversedBinaryRep = new StringBuilder(binaryRep).reverse().toString();
        System.out.println(Integer.parseInt(reversedBinaryRep, 2));
        sc.close();
    }
}

