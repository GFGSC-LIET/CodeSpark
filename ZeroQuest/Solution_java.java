import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        String s = scanner.next();

        int sum = 0;
        for (char c : s.toCharArray()) {
            if (c == '+') {
                sum--;
            } else {
                sum++;
            }
        }

        System.out.println(sum);
    }
}
