import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        StringBuilder stringBuilder = new StringBuilder();
        for (int i = 1; i <= N; ++i) {
            stringBuilder.append(i + " Abracadabra\n");
        }
        System.out.print(stringBuilder.toString());
        sc.close();
    }
}
