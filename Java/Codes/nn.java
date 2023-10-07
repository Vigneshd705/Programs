public class nn {
    public static boolean containsNine(int Num) {
        return true;
    }

    public static void main(String[] args) {

        System.out.println("Numbers between 1->100 that contain digit 9");
        for (int i = 1; i <= 100; i++) {
            int num = i;
            while (num > 0) {
                int digit = num % 10;
                if (digit == 9) {
                    if (containsNine(i)) {
                        System.out.println(i + " ");
                        
                    }
                   else
                   System.out.println(num + " ");
                    
                    
                    
                }
                num /= 10;
               
               
                

            }
             

        }
    }

}
