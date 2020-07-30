import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();
        int ZR = sc.nextInt();
        int ZC = sc.nextInt();

        String[][] article = IntStream.range(0, R)
            .mapToObj(i -> sc.next())
            .map(row -> row.split(""))
            .toArray(String[][]::new);
        
        for (int i = 0; i < R; ++i) {
            String[] row = article[i];
            String[] expandedRow = new String[C * ZC];
            int index = 0;
            for (int j = 0; j < row.length; ++j) {
                for (int k = 0; k < ZC; ++k) {
                    expandedRow[index++] = row[j];
                }
            }
            String output = String.join("", expandedRow);
            IntStream.range(0, ZR)
                .mapToObj(x -> output)
                .forEach(System.out::println);
        }

        sc.close();
    }
}

