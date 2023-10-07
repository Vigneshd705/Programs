abstract class employee
{
    private int id,salary;
    private String name;
    employee(int id,int salary,String name)
    {
        this.id=id;
        this.salary=salary;
        this.name=name;
    }
    String getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
     abstract void getSalary();

}
class manager extends employee
{
    private int salary;
    manager(int id,int salary,String name)
    {
        super(id,salary,name);
        this.salary=salary;
    }
    @Override
    void getSalary()
    {
        System.out.println("salary for Manager:"+this.salary);
    }
}
class Engineer extends employee
{
    private int salary;
    Engineer(int id,int salary,String name)
    {
        super(id,salary,name);
        this.salary=salary;
    }
    @Override
    void getSalary()
    {
        System.out.println("salary for Engineer:"+this.salary);
    }
}
class Secreatory extends employee
{
    private int salary;
    Secreatory(int id,int salary,String name)
    {
        super(id,salary,name);
        this.salary=salary;
    }
    @Override
    void getSalary()
    {
        System.out.println("salary for Secreatory:"+this.salary);
    }
}
public class ass14 {
    public static void main(String[] args) {
        manager o1=new manager(1,20000,"vel");
        o1.getSalary();
        Engineer o2=new Engineer(2,300000,"raj");
        o2.getSalary();
        Secreatory o3=new Secreatory(2,40000,"leo");
        o3.getSalary();
    }
}