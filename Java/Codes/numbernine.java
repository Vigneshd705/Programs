public class numbernine {
    public static void main(String[] args) {
        for (int i=9;i<101;i++)
        {
            //int n=i;
                if(i%10==9 || (i/10)%10==9)
                {
                    System.out.println(i);
                }
        }
    }
}
