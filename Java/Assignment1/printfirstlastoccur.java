import java.util.Scanner;
public class printfirstlastoccur
{
    public static void main(String[] args) {
        int arr[]=new int[10];
         int count=0,first=0,last=0;
        int n;
        Scanner obj=new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        n=obj.nextInt();
        for (int i=0;i<n;i++)
        {
            arr[i]=obj.nextInt();
        }
        System.out.print("Enter the digit you want to search: ");
       
        int x=obj.nextInt();
        for (int i=0;i<n;i++)
        {
            if (x==arr[i])
            {
                if (count==0)
                {
                    first=i;
                    last=i;
                }
                else
                {
                    last=i;
                }
                count++;
            }
        }
        System.out.println(first);
        System.out.println(last);
    }

}