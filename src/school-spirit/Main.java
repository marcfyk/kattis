import java.util.*;
import java.util.function.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] scores = IntStream.range(0, n)
            .map(i -> sc.nextInt())
            .toArray();
        
        double totalScore = getTotalScore(scores);

        double average = IntStream.range(0, n)
            .mapToObj(i -> IntStream.range(0, n).filter(index -> index != i))
            .map(indexes -> indexes.map(index -> scores[index]).toArray())
            .mapToDouble(Main::getTotalScore)
            .average()
            .orElse(0);

        System.out.println(totalScore);
        System.out.println(average);

        sc.close();
    }

    private static double getTotalScore(int[] scores) {
        IntToDoubleFunction f = index -> Math.pow(4.0 / 5.0, index);
        double[] weights = IntStream.range(0, scores.length).mapToDouble(f).toArray();
        double sum = IntStream.range(0, scores.length).mapToDouble(i -> scores[i] * weights[i]).sum();
        return 0.2 * sum;
    }


}

