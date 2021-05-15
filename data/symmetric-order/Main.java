import java.util.*;
import java.util.stream.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<List<String>> inputSets = new ArrayList<>();
        int n = sc.nextInt();

        while (n != 0) {
            List<String> set = IntStream.range(0, n)
                .mapToObj(i -> sc.next())
                .collect(Collectors.toList());
            inputSets.add(set);
            n = sc.nextInt();
        }

        List<Deque<String>> outputs = inputSets.stream().map(input -> {
            Deque<String> symmetricNames = new ArrayDeque<>();
            IntStream.rangeClosed(1, input.size())
                .map(i -> input.size() - i)
                .forEach(i -> {
                    String name = input.get(i);
                    if (i % 2 == 0) {
                        symmetricNames.addFirst(name);
                    } else {
                        symmetricNames.addLast(name);
                    }
                });
            return symmetricNames;
        })
        .collect(Collectors.toList());

        IntStream.range(0, outputs.size()).forEach(i -> {
            System.out.println("Set " + (i + 1));
            outputs.get(i).stream().forEach(System.out::println);;
        });

        sc.close();
    }
}

