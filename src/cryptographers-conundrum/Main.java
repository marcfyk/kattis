import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        char[] c = word.toCharArray();
        int count = 0;
        for (int i = 0; i < c.length; ++i) {
            int mod = i % 3;
            if (mod == 0 && c[i] != 'P') {
                ++count;
            } else if (mod == 1 && c[i] != 'E') {
                ++count;
            } else if (mod == 2 && c[i] != 'R') {
                ++count;
            }
        }
        System.out.println(count);
        sc.close();
    }
}

