import java.util.Scanner;

public class Main {
    static boolean isArmstrong(int n) {
        int digitCount = (int) (Math.log10(n) + 1);
        int sum = 0, temp = n;

        while (temp > 0) {
            sum += Math.pow(temp % 10, digitCount);
            temp /= 10;
        }

        return (sum == n);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        if (isArmstrong(n)) {
            System.out.println("YES");
        } else {
            System.out.print("NO ");

            int temp = n;
            while (!isArmstrong(n)) {
                n++;
            }

            System.out.println(n - temp);
        }
    }
}
