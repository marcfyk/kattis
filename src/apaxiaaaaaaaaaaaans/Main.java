import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        char[] chars = name.toCharArray();
        StringBuilder compactName = new StringBuilder();
        char prev = chars[0];
        compactName.append(prev);
        for (int i = 1; i < chars.length; ++i) {
            if (prev != chars[i]) {
                compactName.append(chars[i]);
            }
            prev = chars[i];
        }
        System.out.println(compactName.toString());
        sc.close();
    }
}

