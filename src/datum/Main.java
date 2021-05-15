import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.time.DayOfWeek;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int D = sc.nextInt();
        int M = sc.nextInt();
        String date = String.format("2009 %02d %02d", M, D);
        DateTimeFormatter format = DateTimeFormatter.ofPattern("yyyy MM dd");
        LocalDate dateTime = LocalDate.parse(date, format);
        String day = dateTime.getDayOfWeek().toString();
        String capitalizedDay = day.substring(0, 1).toUpperCase() + day.substring(1).toLowerCase();
        System.out.println(capitalizedDay);
        sc.close();
    }
}

