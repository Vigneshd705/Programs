class Shape
{
    void print1()
    {
        System.out.println("This is this shape");
    }
}
class rectangle extends Shape
{
    void print2()
    {
        System.out.println("This is Rectangular shape");
    }
}
class circle extends Shape
{
    void print3()
    {
        System.out.println("This is Circular shape");
    }
}
class square extends rectangle
{
    void print4()
    {
        System.out.println("Square is rectangle");
    }
}
public class ass10 {
    public static void main(String[] args) {
        square obj=new square();
        obj.print1();
        obj.print2();
        
    }
}
