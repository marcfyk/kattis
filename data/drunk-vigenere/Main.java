import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[] C = sc.next().toCharArray();
        char[] K = sc.next().toCharArray();
        StringBuilder stringBuilder = new StringBuilder();

        for (int i = 0; i < C.length; ++i) {
            int c = C[i] % 65;
            int k = K[i] % 65;
            int offset = i % 2 == 0 ? c - k : c + k;
            if (offset < 0) {
                stringBuilder.append((char) (((26 + offset) % 26) + 65));
            } else {
                stringBuilder.append((char) ((offset % 26) + 65));
            }
        }

        System.out.println(stringBuilder.toString());

        sc.close();
    }
}

