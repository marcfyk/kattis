import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for (int i = 0; i < N; ++i) {
            String encodedMessage = sc.next();
            System.out.println(decode(encodedMessage));
        }
        sc.close();
    }

    private static String decode(String msg) {
        StringBuilder stringBuilder = new StringBuilder();
        int L = msg.length();
        int d = (int) Math.pow(L, 0.5);
        String[] tokens = msg.split("");
        String[][] table = new String[d][d];
        int index = 0;
        for (int i = 0; i < d; ++i) {
            for (int j = 0; j < d; ++j) {
                table[i][j] = tokens[index++];
            }
        }
        StringBuilder decodedMsg = new StringBuilder();
        for (int i = d - 1; i >= 0; --i) {
            for (int j = 0; j < d; ++j) {
                decodedMsg.append(table[j][i]);
            }
        }
        return decodedMsg.toString();
    }

}

