import java.util.Scanner;

class Shape
{
    void getArea()
    {

    }
}
class rectangle extends Shape
{
    float length,breadth;
    void getArea()
    {
        Scanner obj=new Scanner(System.in);
        System.out.print("Enter length: ");
        length=obj.nextFloat();
        System.out.print("Enter breadth: ");
        breadth=obj.nextFloat();
        System.out.println(length*breadth);

    }
}
public class ass3 {
    public static void main(String[] args) {
        Shape obj=new rectangle();
        obj.getArea();

    }
}
