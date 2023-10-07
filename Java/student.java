class ABC
{
    static int i;
    ABC()
    {   
        i++;
    }
    void display()
    {
        System.out.println(i);
    }
}
 public class student {

    public static void main(String[] args) 
    {
        ABC obj=new ABC();
        ABC obj1=new ABC();
        ABC obj2=new ABC();
        obj.display();
        obj2.display();
        obj2.display();  
    }
}
