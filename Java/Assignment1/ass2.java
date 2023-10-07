class vehicle
{
    void drive()
    {
        System.out.println("Repairing a vehicle");
    }
}
class Car extends  vehicle
{
    void drive()
    {
        System.out.println("Repairing a car");
    }
}
public class ass2 {
    public static void main(String[] args) {
        vehicle obj=new Car();
        obj.drive(); 
    }  
}
