import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] T = new int[N];
        double[] V = new double[N];
        for (int i = 0; i < N; ++i) {
            T[i] = sc.nextInt();
            V[i] = sc.nextDouble();
        }

        double area = 0;
        int index = 0;
        int prevT = T[index];
        double prevV = V[index];
        while (index < N - 1) {
            int nextT = T[index + 1];
            double nextV = V[index + 1];
            area += (((prevV + nextV) / 2) * (nextT - prevT)) / 1000;
            prevT = nextT;
            prevV = nextV;
            ++index;
        }

        System.out.println(area);
        sc.close();
    }
}

