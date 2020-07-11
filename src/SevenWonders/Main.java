import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String line = sc.next();
        char[] chars = line.toCharArray();
        int score = 0;
        int countT = 0;
        int countC = 0;
        int countG = 0;
        for (int i = 0; i < chars.length; ++i) {
            switch (chars[i]) {
                case 'T':
                    ++countT;
                    break;
                case 'C':
                    ++countC;
                    break;
                case 'G':
                    ++countG;
                    break;
                default:
                    break;
            }
        }
        int lowestCount = Math.min(countT, Math.min(countC, countG));
        score += countT * countT;
        score += countC * countC;
        score += countG * countG;
        score += lowestCount * 7;

        System.out.println(score);
        sc.close();
    }
}

