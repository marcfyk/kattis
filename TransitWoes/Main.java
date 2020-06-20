import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int s = sc.nextInt();
        int t = sc.nextInt();
        int n = sc.nextInt();
        int[] D = new int[n + 1];
        int[] B = new int[n];
        int[] C = new int[n];
        for (int i = 0; i < n + 1; ++i) {
            int d = sc.nextInt();
            D[i] = d;
        }
        for (int i = 0; i < n; ++i) {
            int b = sc.nextInt();
            B[i] = b;
        }
        for (int i = 0; i < n; ++i) {
            int c = sc.nextInt();
            C[i] = c;
        }
        int timeElapsed = s;
        int bus = 0;
        for (int i = 0; i < n; ++i) {
            int walkTime = D[i];
            int busTime = B[i];
            int interval = C[i];
            timeElapsed += walkTime;
            timeElapsed += (interval - (timeElapsed % interval)) % interval;
            timeElapsed += busTime;
        }
        timeElapsed += D[n];
        System.out.println(timeElapsed > t ? "no" : "yes");
        sc.close();
    }

}

