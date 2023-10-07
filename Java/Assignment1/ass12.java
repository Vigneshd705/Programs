import java.util.Scanner;

public class ass12 {
    public static void main(String[] args) {
        String str,res="";
        Scanner obj =new Scanner(System.in);
        str=obj.nextLine();
        for (int i=0;i<str.length();i++)
        {
            if (Character.isUpperCase(str.charAt(i)))
                res=res+Character.toLowerCase(str.charAt(i));
            else
                res=res+Character.toUpperCase(str.charAt(i));

        }
        System.out.println(res);
    }
}
