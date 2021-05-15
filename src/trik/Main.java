import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] moves = sc.next().split("");
        int n = 1;
        for (int i = 0; i < moves.length; ++i) {
            String move = moves[i];
            switch (move) {
                case "A":
                    if (n == 1) {
                        n = 2;
                    } else if (n == 2) {
                        n = 1;
                    }
                    break;
                case "B":
                    if (n == 2) {
                        n = 3;
                    } else if (n == 3) {
                        n = 2;
                    }
                    break;
                case "C":
                    if (n == 1) {
                        n = 3;
                    } else if (n == 3) {
                        n = 1;
                    }
                    break;
                default:
                    break;
            }
        }
        System.out.println(n);
        sc.close();
    }
}
