import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String line = sc.next();
        StringBuilder stringBuilder = new StringBuilder();
        char[] characters = line.toCharArray();
        if (characters.length != 0) {
            stringBuilder.append(characters[0]);
        }
        for (int i = 1; i < characters.length; ++i) {
           int asciiValue = (int) characters[i - 1];
           if (asciiValue == 45) {
               stringBuilder.append(characters[i]);
           }
        }
        System.out.println(stringBuilder.toString());
        sc.close();
    }
}
