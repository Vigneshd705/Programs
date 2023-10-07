import java.util.Scanner;

public class ass13 {
    public static void main(String[] args) {
        String str="";
        int count=0;
        Scanner obj = new Scanner(System.in);
        str=obj.nextLine();
        for (int i=0;i<str.length();i++)
        {
            count=0;
            for (int j=0;j<str.length();j++)
            {
                if(str.charAt(i) == str.charAt(j))
                    count++;
            }
            if (count==1)
            {
                System.out.println(str.charAt(i));
            }
        }    
    }
}
