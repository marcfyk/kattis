import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int count = 0;
        for (int i = 0; i < N; ++i) {
            String word = sc.next().toLowerCase();
            if (word.contains("pink") || word.contains("rose")) {
                ++count;
            }
        }
        if (count > 0) {
            System.out.println(count);
        } else {
            System.out.println("I must watch Star Wars with my daughter");
        }
        sc.close();
    }
}

