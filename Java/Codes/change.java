import java.util.ArrayList;
import java.util.Scanner;

public class change{
    public static void main(String[] args) {
        String str;
        ArrayList<Character> tempd = new ArrayList<>(1);
        ArrayList<Character> tempa = new ArrayList<>(1);
        System.out.println("Enter the String: ");
        Scanner scanner=new Scanner(System.in);
        str=scanner.nextLine();
        int len=str.length();
        for ( int i = 0; i < len; i++) {
            if('0'<=str.charAt(i)&&str.charAt(i)<='9') tempd.add(str.charAt(i));
            else tempa.add(str.charAt(i));
        }
        int[] digit = new int[tempd.size()];
        
    }
}