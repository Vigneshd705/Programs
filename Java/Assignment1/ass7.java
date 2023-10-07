class parent
{
    void print1()
    {
        System.out.println("this is parent class");
    }
}
class child extends parent
{

    void print()
    {
        System.out.println("this is child");
    }
}
public class ass7 {
    public static void main(String[] args) {
        parent o=new parent();
        o.print1();
        child o2=new child();
        o2.print();
        o2.print1();
    }
}