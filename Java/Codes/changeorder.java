import java.util.Scanner;

public class changeorder{
    public static void main(String[] args) {
        String str;
        char tempd;
        char tempA;
        System.out.println("Enter the String: ");
        Scanner scanner=new Scanner(System.in);
        str=scanner.nextLine();
        int len=str.length();
        char minA='a',min_d='0';
        for (int i=0;i<len;i++)
        {
            if(Character.isDigit(str.charAt(i)))
            {
                if(min_d>str.charAt(i))
                {
                    min_d=str.charAt(i);
                }
                if(min_d==str.charAt(i))
                {
                    tempd=str.charAt(i);
                    str.replace(min_d,str.charAt(i));
                    min_d=tempd;
                }
            }
            else if(Character.isAlphabetic(str.charAt(i)))
            {
                 if(Character.toUpperCase(minA)<Character.toUpperCase(str.charAt(i)));
                {
                    minA=str.charAt(i);
                }
                if(minA==str.charAt(i))
                {
                    tempA=str.charAt(i);
                    str.replace(minA,str.charAt(i));
                    minA=tempA;
                }
            }
        }
        System.out.println(str);
    }
}