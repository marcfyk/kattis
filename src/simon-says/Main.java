import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine().strip());
        for (int i = 0; i < N; ++i) {
            String line = sc.nextLine();
            int index = line.lastIndexOf("Simon says");
            if (index != -1) {
                System.out.println(line.substring(index + 11));
            }
        }
        sc.close();
    }
}

