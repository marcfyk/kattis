import java.util.*;
import java.util.stream.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Set<String> vowels = Stream.of("a", "e", "i", "o", "u")
            .collect(Collectors.toSet());
        String line = sc.nextLine().strip();
        String[] tokens = line.split(" ");
        String[] output = new String[tokens.length];
        for (int i = 0; i < tokens.length; ++i) {
            String token = tokens[i];
            String decodedToken = decode(token, vowels);
            output[i] = decodedToken;
        }

        System.out.println(String.join(" ", output));
        
        sc.close();
    }

    private static String decode(String s, Set<String> vowels) {
        String[] c = s.split("");
        StringBuilder stringBuilder = new StringBuilder();
        int index = 0;
        while (index < c.length) {
            stringBuilder.append(c[index]);
            if (!vowels.contains(c[index])) {
                ++index;
            } else {
                index += 3;
            }
        }
        return stringBuilder.toString();
    }

}

