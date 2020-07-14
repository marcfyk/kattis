import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        List<String> ranking = new ArrayList<>();
        Map<String, String> bestTeams = new HashMap<>();
        for (int i = 0; i < N; ++i) {
            String uni = sc.next();
            String team = sc.next();
            if (ranking.size() >= 12) {
                break;
            }
            if (!bestTeams.containsKey(uni)) {
                ranking.add(uni);
                bestTeams.put(uni, team);
            }
        }
        for (String uni : ranking) {
            String team = bestTeams.get(uni);
            System.out.println(String.format("%s %s", uni, team));
        }
        sc.close();
    }
}

