import java.util.Scanner;

public class Hyp {
    public static void main(String[] args) {
        double adj,opp,hyp;
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter the value of Adjacent Side: ");
        adj=scanner.nextDouble();
        System.out.println("Enter the value of side Opposite Side: ");
        opp=scanner.nextDouble();
        hyp=Math.sqrt(Math.pow(adj,2)+Math.pow(opp,2));
        System.out.println("The value of hypotenuse is "+hyp);
        


    }
}
