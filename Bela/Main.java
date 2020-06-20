import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String B = sc.next();
        int score = 0;
        Map<String, int[]> scores = new HashMap<>();
        scores.put("A", new int[]{11, 11});
        scores.put("K", new int[]{4, 4});
        scores.put("Q", new int[]{3, 3});
        scores.put("J", new int[]{20, 2});
        scores.put("T", new int[]{10, 10});
        scores.put("9", new int[]{14, 0});
        scores.put("8", new int[]{0, 0});
        scores.put("7", new int[]{0, 0});
        for (int i = 0; i < 4 * N; ++i) {
            String[] characters = sc.next().strip().split("");
            String card = characters[0];
            String suit = characters[1];
            if (suit.equals(B)) {
                score += scores.get(card)[0];
            } else {
                score += scores.get(card)[1];
            }
        }
        System.out.println(score);
        sc.close();
    }
}
