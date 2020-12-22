import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        while (n != -1) {
            int distance = 0;
            int prevTime = 0;
            for (int i = 0; i < n; ++i) {
                int speed = sc.nextInt();
                int time = sc.nextInt();
                distance += (speed * (time - prevTime));
                prevTime = time;
            }
            System.out.println(distance + " miles");
            n = sc.nextInt();
        }
        sc.close();
    }
}

