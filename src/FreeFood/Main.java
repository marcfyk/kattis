import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long days = IntStream.range(0, sc.nextInt())
            .flatMap(i -> IntStream.rangeClosed(sc.nextInt(), sc.nextInt()))
            .distinct()
            .count();
        System.out.println(days);
        sc.close();
    }
}

