import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String name,email;
        int id;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the customer name: ");
        name = scanner.nextLine();
        System.out.println("Enter your mail id: ");
        email = scanner.nextLine();
        System.out.println("Enter your id: ");
        id = scanner.nextInt();

       customer customer1=new customer();
       customer1.newCustomer(name,id,email);
       customer temp;
       temp=customer1.display();
        System.out.println(temp.name);
        System.out.println(temp.customer_id);
        System.out.println(temp.email);
//        System.out.println(customer1.setName());
//        System.out.println(customer1.setId());
//        System.out.println(customer1.setEmail());
//        menu Menu=new menu();
//        Menu.choice();
    }
}