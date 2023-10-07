public class Arrays {
    public static void main(String[] args) {
        /*
         * String[][] fruits=new String[2][2];
         * fruits[0][0]="Apple";
         * fruits[0][1]="Banana";
         * fruits[1][0]="Orange";
         * fruits[1][1]="Mango";
         */
        String[][] fruits = { { "Apple", "Banana" }, { "Orange", "Mango" } };
        for (int i = 0; i < fruits.length; i++) {
            System.out.println();
            for (int j = 0; j < fruits[i].length; j++) {
                System.out.print(fruits[i][j] + " ");
            }
        }
    }
}
