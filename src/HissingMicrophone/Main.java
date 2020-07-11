import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.next();
        char[] characters = word.toCharArray();
        char prev = characters[0];
        boolean hasConsecutiveS = false;
        for (int i = 1; i < characters.length; ++i) {
            char c = characters[i];
            if (c == 's' && prev == 's') {
                hasConsecutiveS = true;
                break;
            }
            prev = c;
        }
        System.out.println(hasConsecutiveS ? "hiss" : "no hiss");
        sc.close();
    }
}
