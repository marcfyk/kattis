import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();
        int C = sc.nextInt();

        int[] counts = new int[]{0, 0, 0, 0, 0};

        String[][] map = new String[R][C];
        for (int i = 0; i < R; ++i) {
            String[] tokens = sc.next().split("");
            for (int j = 0; j < C; ++j) {
                map[i][j] = tokens[j];
            }
        }
        
        for (int i = 0; i < R - 1; ++i) {
            for (int j = 0; j < C - 1; ++j) {
                String a = map[i][j];
                String b = map[i + 1][j];
                String c = map[i][j + 1];
                String d = map[i + 1][j + 1];
                if (getCount("#", a, b, c, d) > 0) {
                    continue;
                } else {
                    int xCount = getCount("X", a, b, c, d);
                    counts[xCount]++;
                }
            }
        }

        Arrays.stream(counts).forEach(System.out::println);

        sc.close();
    }

    private static int getCount(String token, String... values) {
        return (int) Arrays.stream(values)
            .filter(x -> x.equals(token))
            .count();
    }
}

