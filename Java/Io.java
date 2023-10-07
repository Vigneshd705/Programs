import java.util.Scanner;
public class Io {
    public static void main(String[] args) {
        System.out.println("What is your Name?");
        Scanner n= new Scanner(System.in);
        String name=n.nextLine();
        System.out.println("Hello! "+name);
        System.out.println("What is your favourite food?");
        Scanner m= new Scanner(System.in);
        String food=m.nextLine();
        System.out.println("Food: "+food);
    }
}
