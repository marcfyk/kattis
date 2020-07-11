import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int G = sc.nextInt();
        int S = sc.nextInt();
        int C = sc.nextInt();

        int score = 3 * G + 2 * S + 1 * C;

        String output = null;

        if (score > 7) {
            output = "Province or Gold";
        } else if (score > 5) {
            output = "Duchy or Gold";
        } else if (score > 4) {
            output = "Duchy or Silver";
        } else if (score > 2) {
            output = "Estate or Silver";
        } else if (score > 1) {
            output = "Estate or Copper";
        } else {
            output = "Copper";
        }

        System.out.println(output);

        sc.close();
    }

}

