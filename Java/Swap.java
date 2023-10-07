public class swap{
    public static void main(String[] args) {
        String a="Python";
        String b="Java";
        System.out.printf("Before Swapping:\na=%s\nb=%s\n",a,b);
        String temp;
        temp=a;
        a=b;
        b=temp;
        System.out.printf("After Swapping:\na=%s\nb=%s",a,b);

    }
    
}
