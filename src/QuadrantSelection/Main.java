import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        String point = (x > 0 ? "1" : "0") + (y > 0 ? "1" : "0");
        int quadrant;
        switch (point) {
            case "11":
                quadrant = 1;
                break;
            case "01":
                quadrant = 2;
                break;
            case "00":
                quadrant = 3;
                break;
            case "10":
                quadrant = 4;
                break;
            default:
                quadrant = 0;
        }
        System.out.println(quadrant);
        sc.close();
    }
}
