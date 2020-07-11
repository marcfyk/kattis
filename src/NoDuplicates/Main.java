import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        String[] tokens = line.split(" ");
        Set<String> dictionary = new HashSet<>();
        boolean hasRepeat = false;
        for (int i = 0; i < tokens.length; ++i) {
            if (dictionary.contains(tokens[i])) {
                hasRepeat = true;
                break;
            }
            dictionary.add(tokens[i]);
        }
        System.out.println(hasRepeat ? "no" : "yes");
        sc.close();
    }
}
