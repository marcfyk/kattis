import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int L = sc.nextInt();
        int x = sc.nextInt();
        int size = 0;
        int count = 0;
        for (int i = 0; i < x; ++i) {
            String action = sc.next();
            int n = sc.nextInt();
            switch (action) {
                case "enter":
                    if (size + n > L) {
                        ++count;
                    } else {
                        size += n;
                    }
                    break;
                case "leave":
                    size -= n;
                    break;
            }
        }
        System.out.println(count);
        sc.close();
    }
}
