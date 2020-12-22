import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String line = sc.next();        
        char[] chars = line.toCharArray();
        double spaceCount = 0;
        double lowerCaseCount = 0;
        double upperCaseCount = 0;
        double symbolCount = 0;
        for (int i = 0; i < chars.length; ++i) {
            int c = (int) chars[i];
            if (c == 95) {
                ++spaceCount;
            } else if (Character.isLowerCase(c)) {
                ++lowerCaseCount;
            } else if (Character.isUpperCase(c)) {
                ++upperCaseCount;
            } else if (c < 65 || (90 < c && c < 97) || c > 122) {
                ++symbolCount;
            }
        }

        System.out.println(spaceCount / chars.length);
        System.out.println(lowerCaseCount / chars.length);
        System.out.println(upperCaseCount / chars.length);
        System.out.println(symbolCount / chars.length);

        sc.close();
    }
}

