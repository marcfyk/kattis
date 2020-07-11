import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] scores = new int[5];
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 4; ++j) {
                scores[i] += sc.nextInt();
            }
        }
        int index = 0;
        int maxScore = 0;
        for (int i = 0; i < 5; ++i) {
            if (scores[i] > maxScore) {
                maxScore = scores[i];
                index = i + 1;
            }
        }
        System.out.println(index + " " + maxScore);
        sc.close();
    }
}
