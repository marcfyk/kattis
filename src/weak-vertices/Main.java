import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n != -1) {
            int[][] matrix = readMatrix(sc, n);
            List<Integer> nodes = getNodes(matrix);
            System.out.println(String.join(" ", nodes.stream().map(i -> i + "").toArray(String[]::new)));
            n = sc.nextInt();
        }
        sc.close();
    }

    private static int[][] readMatrix(Scanner sc, int n) {
        return IntStream.range(0, n)
            .mapToObj(i -> IntStream.range(0, n))
            .map(stream -> stream.map(i -> sc.nextInt()))
            .map(IntStream::toArray)
            .toArray(int[][]::new);
    }

    private static List<Integer> getNodes(int[][] matrix) {
        return IntStream.range(0, matrix.length)
            .filter(index -> {
                int[] row = matrix[index];
                List<Integer> adjacentIndexes = IntStream.range(0, row.length).filter(i -> row[i] == 1).boxed().collect(Collectors.toList());
                List<Integer> adjacentAdjacentIndexes = adjacentIndexes.stream()
                    .map(i -> matrix[i])
                    .flatMap(r -> IntStream.range(0, r.length).filter(i -> r[i] == 1).boxed())
                    .distinct()
                    .collect(Collectors.toList());
                return adjacentAdjacentIndexes.stream()
                    .map(i -> matrix[i])
                    .map(r -> r[index])
                    .noneMatch(x -> x == 1);
            })
            .mapToObj(x -> x)
            .collect(Collectors.toList());
    }

}
