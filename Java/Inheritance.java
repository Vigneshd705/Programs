import javax.sound.sampled.SourceDataLine;

class RBI
{
    //System.out.println("Welcome to INDIAN Banking!");
}
class SBI extends RBI
{
    static void SIN(float p)
    {
        System.out.println(((p*7/100)));
    }
}
class IOB extends SBI
{
    static void IIN(float p)
    {
        System.out.println(((p*8/100)));
    }
}
class BOI extends IOB
{
    static void BIN(float p)
    {
        System.out.println(((p*9/100)));
    }
}
public class Inheritance {
    public static void main(String[] args) {
        BOI.SIN(5000);
        BOI.BIN(5000);
    }
    
}
