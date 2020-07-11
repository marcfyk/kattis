import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int hours = sc.nextInt();
        int minutes = sc.nextInt();
        int minutesPerDay = 24 * 60;
        int totalMinutes = hours * 60 + minutes;
        if (totalMinutes < 45) {
            totalMinutes += minutesPerDay;
        }
        totalMinutes -= 45;
        totalMinutes %= minutesPerDay;
        int adjustedHours = totalMinutes / 60;
        int adjustedMinutes = totalMinutes % 60;
        System.out.println(adjustedHours + " " + adjustedMinutes);
        sc.close();
    }
}
