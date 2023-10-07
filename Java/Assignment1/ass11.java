import java.util.Scanner;

public class ass11 {
    public static void main(String[] args) {
        int N, D, count = 0;
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter the number N: ");
        N = obj.nextInt();
        System.out.print("Enter the digit D: ");
        D = obj.nextInt();
        while (N > 0) {
            int temp = N % 10;
            if (temp == D)
                count++;
            N /= 10;

        }
        System.out.println(count);
    }
}
