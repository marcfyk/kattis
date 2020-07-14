import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; ++i) {
            int N = sc.nextInt();
            Set<String> cities = new HashSet<>();
            for (int j = 0; j < N; ++j) {
                String city = sc.next();
                cities.add(city);
            }
            System.out.println(cities.size());
        }
        sc.close();
    }
}

