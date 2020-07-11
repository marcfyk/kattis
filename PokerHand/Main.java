import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Map<String, Integer> rankCount = new HashMap<>();

        for (int i = 0; i < 5; ++i) {
            String card = sc.next();
            String rank = card.substring(0, 1);
            if (!rankCount.containsKey(rank)) {
                rankCount.put(rank, 1);
            } else {
                rankCount.put(rank, rankCount.get(rank) + 1);
            }
        }

        int max = 0;
        for (Integer i : rankCount.values()) {
            max = Math.max(i, max);
        }
        
        System.out.println(max);

        sc.close();
    }

}

