class member
{
    int age,num;
    String name,add;
    float sal;
    member(int age,int num,String name, String add,float sal)
    {
        this.age=age;
        this.num=num;
        this.name=name;
        this.add=add;
        this.sal=sal;
    }
    void printsalary()
    {
        System.out.println("salary :"+sal);
    }
}
class empol extends member
{
    private String special;
    empol(int age,int num,String name, String add,float sal,String special)
    {
        super(age,num,name,add,sal);
        this.special=special;
    }

}
class manager extends member
{
   private String depart;
    manager(int age,int num,String name, String add,float sal,String depart)
    {
        super(age,num,name,add,sal);
        this.depart=depart;
    }
}
public class ass9
{
    public static void main(String[] args) {
        empol o1=new empol(12,555555555,"man","earth",750,"it");
        manager o2=new manager(20,3333333,"man2","mars",2000,"it");
        o1.printsalary();
        o2.printsalary();
    }
}