import java.util.Scanner;

class Four {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter X, Y, n");
        int x = scanner.nextInt(), y = scanner.nextInt(), n =
            scanner.nextInt(), curr, s = 0;

        for (int i = 1; i <= n; i++) {
            curr = scanner.nextInt();

            if (x < curr && curr < y) {
                s += curr;
            }
        }

        System.out.println("Sum = " + s);

        scanner.close();
    }
}
