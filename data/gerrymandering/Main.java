import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int P = sc.nextInt();
        int D = sc.nextInt();
        double V = 0;
        Map<Integer, District> districts = new HashMap<>();
        for (int i = 0; i < P; ++i) {
            int index = sc.nextInt();
            int A = sc.nextInt();
            int B = sc.nextInt();
            if (!districts.containsKey(index)) {
                districts.put(index, new District(index));
            }
            District d = districts.get(index);
            d.A += A;
            d.B += B;
            V += A;
            V += B;
        }
        int totalWastedA = 0;
        int totalWastedB = 0;
        for (int i = 1; i <= D; ++i) {
            District d = districts.get(i);
            String winner = d.A > d.B ? "A" : "B";
            int total = d.A + d.B;
            int maj = total / 2 + 1;
            int wastedA = winner.equals("A") ? d.A - maj : d.A;
            int wastedB = winner.equals("B") ? d.B - maj : d.B;
            System.out.println(String.format("%s %d %d", winner, wastedA, wastedB));
            totalWastedA += wastedA;
            totalWastedB += wastedB;
        }
        double E = Math.abs(totalWastedA - totalWastedB) / V;
        System.out.println(E);
        sc.close();
    }

    private static class District {
        private int index;
        private int A;
        private int B;

        private District(int index, int A, int B) {
            this.index = 0;
            this.A = A;
            this.B = B;
        }

        private District(int index) {
            this(index, 0, 0);
        }

        @Override
        public String toString() {
            return String.format("%d %d %d d", index, A, B);
        }
    }

}

