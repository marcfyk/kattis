import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] lines = new String[5];
        for (int i = 0; i < 5; ++i) {
            lines[i] = sc.next();
        }
        String[] indexes = IntStream.range(0, 5)
            .filter(i -> lines[i].contains("FBI"))
            .map(i -> i + 1)
            .mapToObj(i -> String.format("%d", i))
            .toArray(String[]::new);

        System.out.println(indexes.length == 0 
                ? "HE GOT AWAY!"
                : String.join(" ", indexes));

        sc.close();
    }
}
