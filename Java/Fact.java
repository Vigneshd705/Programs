import java.util.Scanner;

public class fact {
    public static void main(String[] args) {
        int num,fact=1,i;
        System.out.print("Enter the number: ");
        Scanner n=new Scanner(System.in);
        num=n.nextInt();
        for (i=1;i<=num;i++)
        {
            fact*=i;
        }
        System.out.printf("The factorial of %d is %d",num,fact);
    }
    
}
