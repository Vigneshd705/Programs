class vehicle
{
    String make,model,fuel;
    int year;
    int d;
    String a,b,c;
    vehicle(String make,String model,String fuel,int year)
    {
       a= this.make=make;
        b=this.model=model;
        c=this.fuel=fuel;
        d=this.year=year;
        System.out.printf(a+"\n"+b+"\n"+c+"\n"+d+"\n");
    }
    int fuel_eff(int dist,int lit)
    {
        return dist/lit;
    }
    int distance(int k)
    {
        return k;
    }
    int max(int speed)
    {
        return speed;
    }
}
class truck extends vehicle
{
    int dist,lit,k,speed;
    int a,b,c;
    truck(String make,String model,String fuel,int year)
    {
        super(make,model,fuel,year);
    }

    void print(int dist,int lit,int k,int speed)
    {
        a=super.fuel_eff(dist,lit);
        b=super.distance(k);
        c=super.max(speed);
        System.out.println("truck details:"+a + b+ c);
    }
}
class car extends vehicle
{
    int dist,lit,k,speed;
    int a,b,c;
    car(String make,String model,String fuel,int year)
    {
        super(make,model,fuel,year);
    }

    void print(int dist,int lit,int k,int speed)
    {
        a=super.fuel_eff(dist,lit);
        b=super.distance(k);
        c=super.max(speed);
        System.out.println("car details:"+a + b+ c);
    }
}
class motorcycle extends vehicle
{
    int dist,lit,k,speed;
    int a,b,c;
    motorcycle(String make,String model,String fuel,int year)
    {
        super(make,model,fuel,year);
    }

    void print(int dist,int lit,int k,int speed)
    {
        a=super.fuel_eff(dist,lit);
        b=super.distance(k);
        c=super.max(speed);
        System.out.println("motorcycle details:"+a + b+ c);
    }
}
public class ass6 {
    public static void main(String[] args) {
        truck o=new truck("KWE2","TOYOTO","PETROL",2004);
        o.print(100,20,30,40);
        car o1=new car("K1QWE","SWI","DISEL",2005);
        o1.print(100,30,25,50);
        motorcycle o2=new motorcycle("GH234FDE","HERO","PETROL/DISEL",2006);
        o2.print(150,30,50,49);
    }
}
