import java.util.*;

public class Main {
    private static class Cup implements Comparable<Cup> {
        private int diameter;
        private String color;

        private Cup(int diameter, String color) {
            this.diameter = diameter;
            this.color = color;
        }

        @Override
        public int compareTo(Cup c) {
            int compareDiameter = Integer.compare(diameter, c.diameter);
            return compareDiameter == 0
                ? color.compareTo(c.color)
                : compareDiameter;
        }

        @Override
        public String toString() {
            return color;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Cup> cups = new ArrayList<>();
        int N = sc.nextInt();
        for (int i = 0; i < N; ++i) {
            String x = sc.next();
            String y = sc.next();
            Integer checkX = getNumber(x);
            Integer checkY = getNumber(y);
            Integer diameter = checkX == null ? checkY * 2 : checkX;
            String color = checkX == null ? x : y;
            cups.add(new Cup(diameter, color));
        }
        cups.stream()
            .sorted()
            .forEach(System.out::println);
        sc.close();
    }

    private static Integer getNumber(String s) {
        try {
            return Integer.parseInt(s);
        } catch (NumberFormatException e) {
            return null;
        }
    }
}

