import java.util.Scanner;

class stack
{
    int top,n;
    int[] arr;
    stack(int n)
    {
        arr=new int[n];
        top=-1;
    }
    void push(int data)
    {
        arr[++top]=data;
    }
    void pop()
    {
        if(top==-1)
        {
            System.out.println("Stack is empty");
        }
        else
            System.out.println(arr[top--]);
    }
    void peek()
    {
        if(top==-1)
        {
            System.out.println("Stack is empty");
        }
        else
            System.out.println(arr[top]);
    }
}
public class Main {
    public static void main(String[] args) {
        int n;
        Scanner scanner=new Scanner(System.in);
        System.out.print("Enter the size of stack: ");
        n=scanner.nextInt();
        stack obj=new stack(n);
        obj.push(5);
        obj.push(6);
        obj.pop();
        obj.pop();
        obj.pop();




    }
}
