import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int x, y;
        x = scanner.nextInt();
        y = scanner.nextInt();

        int amount = (x * 10 + (y - x) * 5);
        System.out.println(amount);
    }
}
