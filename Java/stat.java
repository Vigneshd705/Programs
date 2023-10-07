class A{
    // static variable
    int a = m1();
     
    // static block
    static {
        System.out.println("Inside static block");
    }
     
    // static method
    static int m1() {
        System.out.println("from m1");
        return 20;
    }
    static class B{
        B()
        {
        A obj=new A();
        System.out.println("Value of a : "+obj.a);
       System.out.println("from main");
        }
    }
     
    // static method(main !!)
}


public class stat 
{
    public static void main(String[] args)
    {
       // A ob =new A();
        A.B o = new A.B();

       
    }
}
