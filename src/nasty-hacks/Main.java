import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; ++i) {
            int r = sc.nextInt();
            int e = sc.nextInt();
            int c = sc.nextInt();
            int withAdvertisement = e - c;
            int withoutAdvertisement = r;
            if (withAdvertisement < withoutAdvertisement) {
                System.out.println("do not advertise");
            } else if (withAdvertisement > withoutAdvertisement) {
                System.out.println("advertise");
            } else {
                System.out.println("does not matter");
            }
        }
        sc.close();
    }
}
