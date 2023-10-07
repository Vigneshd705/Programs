
    class Address
{
    private String Street_Name, District;
    public Address(String Street_Name,String District)
    {
        this.Street_Name=Street_Name;
        this.District=District;
    }
    public String info()
    {
        return Street_Name+","+District;
    }
}
class Person
{
    private String Name;
    private Address address;
    public Person(String Name,Address address)
    {
        this.Name=Name;
        this.address=address;
    }
    public void disp()
    {
        System.out.println("Name is: "+Name);
        System.out.println("Address is: "+ address.info());
    }
}
public class composition
{
	public static void main(String[] args) {
		Address ob = new Address("Thendral Nagar", "Madurai");
        Person ob1 = new Person("Hari", ob);
        ob1.disp();
        //ob1=Null;
        //System.out.println(ob1.address);
	}
}