import java.util.Random;

public class Randomfunc {
    public static void main(String[] args) {
        int num;
        Random random=new Random();
        num=random.nextInt(4,9);
        System.out.println(num);
    }
}
